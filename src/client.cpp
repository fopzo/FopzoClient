#include "client.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <random>
#include <lz4.h>
#include "utils/events.hpp"
#include "utils/services.hpp"
#include <google/protobuf/util/json_util.h>

std::string FopzoClient::make_uuid() { //uuid генератор
    static std::random_device rd; 
    static std::mt19937_64 gen(rd());
    static std::uniform_int_distribution<uint64_t> dis;
    std::ostringstream ss;
    ss << std::hex << std::setfill('0') << std::setw(8) << (dis(gen) & 0xffffffff) << "-" << std::setw(4) << (dis(gen) & 0xffff) << "-" << std::setw(4) << ((dis(gen) & 0x0fff) | 0x4000) << "-" << std::setw(4) << ((dis(gen) & 0x3fff) | 0x8000) << "-" << std::setw(12) << (dis(gen) & 0xffffffffffff);
    return ss.str();
}

FopzoClient::FopzoClient(std::string token, int max_retries)
    :token_(std::move(token))
    ,max_retries_(max_retries)
    ,ssl_ctx_(ssl::context::tls_client)
{
    ssl_ctx_.set_verify_mode(ssl::verify_none);
    socket_ = std::make_unique<ssl::stream<tcp::socket>>(ioc_, ssl_ctx_);
    services = std::make_unique<Services>(this);
}

FopzoClient::~FopzoClient() { stop(); }

void FopzoClient::start() {
    running_ = true;
    io_thread_ = std::thread([this]{ run_loop(); });
    std::unique_lock<std::mutex> lock(connect_mutex_);
    connect_cv_.wait(lock, [this]{ return connected_.load() || !running_.load(); });

    if (!connected_) {
        stop();
        throw std::runtime_error("failed");
    }
}
void FopzoClient::stop() {
    std::lock_guard<std::mutex> stop_lock(stop_mutex_);
    running_ = false;
    connected_ = false;
    try { 
        if (socket_) {
            boost::system::error_code ec;
            socket_->lowest_layer().shutdown(tcp::socket::shutdown_both, ec);
            socket_->lowest_layer().close(ec); 
        }
    } catch(...) {}
    connect_cv_.notify_all();
    auto current_id = std::this_thread::get_id();

    if (io_thread_.joinable()) {
        if (current_id == io_thread_.get_id()) {
            io_thread_.detach();
        } else {
            io_thread_.join();
        }
    }
    if (read_thread_.joinable()) {
        if (current_id == read_thread_.get_id()) {
            read_thread_.detach();
        } else {
            read_thread_.join();
        }
    }
}
void FopzoClient::idle() {
    if (io_thread_.joinable()) io_thread_.join();
}
void FopzoClient::run_loop() {
    retry_count_ = 0;

    while (running_ && retry_count_ < max_retries_) {
        try {
            cipher_ = FCipher();
            socket_ = std::make_unique<ssl::stream<tcp::socket>>(ioc_, ssl_ctx_);

            tcp::resolver resolver(ioc_);
            auto eps = resolver.resolve(SERVER_HOST, std::to_string(SERVER_PORT));
            asio::connect(socket_->lowest_layer(), eps);
            socket_->lowest_layer().set_option(tcp::no_delay(true));
            socket_->handshake(ssl::stream_base::client);

            if (read_thread_.joinable()) read_thread_.join();
            read_thread_ = std::thread([this]{ read_loop(); });

            do_hello();
            if (!do_handshake()) {
                connected_ = false;
                running_ = false;
                try {
                    if (socket_) {
                        boost::system::error_code ec;
                        socket_->lowest_layer().shutdown(tcp::socket::shutdown_both, ec);
                        socket_->lowest_layer().close(ec);
                    }
                } catch (...) {}
                connect_cv_.notify_all();
            } else {
                connected_ = true;
                retry_count_ = 0;
                connect_cv_.notify_all();

                if (on_connect_) on_connect_();

                while (running_ && connected_) {
                    try { 
                        last_ping_sent_ = std::chrono::steady_clock::now();
                        send_raw({0x01}); 
                    } catch(...) { 
                        connected_ = false; 
                    }
                    std::this_thread::sleep_for(std::chrono::seconds(5));
                    if (!running_ || !connected_) break;
                }
            }
        } catch (const std::exception& e) {
            connected_ = false;
            retry_count_++;
            if (retry_count_ < max_retries_ && running_) {
                std::this_thread::sleep_for(std::chrono::seconds(3));
            }
        }
        if (read_thread_.joinable()) read_thread_.join();
    }
    connected_ = false; 
    running_ = false;
}

void FopzoClient::log(const std::string& msg) {
    using namespace std::chrono;
    auto now = system_clock::now();
    auto ms = duration_cast<milliseconds>(now.time_since_epoch()) % 1000;
    std::time_t now_c = system_clock::to_time_t(now);
    std::tm* now_tm = std::localtime(&now_c);

    std::cout << std::put_time(now_tm, "%H:%M:%S") << '.' << std::setfill('0') << std::setw(3) << ms.count() << " | PING=" << std::setfill(' ') << std::setw(3) << ping_.load() << "ms" << " | " << msg << std::endl;
}

void FopzoClient::send_raw(const std::vector<uint8_t>& data) {
    std::lock_guard<std::mutex> lock(send_mutex_);
    uint32_t len = htonl((uint32_t)data.size());
    asio::write(*socket_, asio::buffer(&len, 4));
    asio::write(*socket_, asio::buffer(data.data(), data.size()));
}

void FopzoClient::send_packet(int64_t code, const std::vector<uint8_t>& payload, const std::string& uuid) {
    Fopzo::Base::ClientMsg msg;
    msg.set_id(uuid);
    msg.set_code(code);
    auto* bv = msg.add_data();
    bv->set_one(payload.data(), payload.size());
    std::string s = msg.SerializeAsString();
    send_raw({s.begin(), s.end()});

}

void FopzoClient::fire_packet(int64_t code, const std::vector<uint8_t>& payload) {
    send_packet(code, payload, make_uuid());
}

std::vector<uint8_t> FopzoClient::read_exactly(size_t n) {
    std::vector<uint8_t> buf(n);
    asio::read(*socket_, asio::buffer(buf.data(), n));
    return buf;
}

uint32_t FopzoClient::read_header() {
    auto h = read_exactly(4);
    return ntohl(*reinterpret_cast<uint32_t*>(h.data()));
}

void FopzoClient::read_loop() {
    while (running_) {
        try {
            uint32_t len = read_header();
            if (len == 0) continue;
            auto data = read_exactly(len);

            if (data.size() == 1 && data[0] == 0x01) { // пинг
                auto now = std::chrono::steady_clock::now();
                auto diff = std::chrono::duration_cast<std::chrono::milliseconds>(now - last_ping_sent_).count();
                ping_ = (int)diff;
                continue;
            }
            Fopzo::Base::ServerMsg msg;
            if (!msg.ParseFromArray(data.data(), (int)data.size())) continue;
            handle_message(msg);

        } catch (const std::exception& e) {
            if (running_) {
                std::cerr << "[FopzoClient] error in read_loop " << e.what() << "\n";
            }
            connected_ = false; 
            //running_ = false;

            connect_cv_.notify_all();
            
            // if (on_disconnect_) on_disconnect_();
            
            break;
        }
    }
}

void FopzoClient::handle_message(const Fopzo::Base::ServerMsg& msg) {
    for (const auto& resp : msg.responses()) {
        std::lock_guard<std::mutex> lock(pending_mutex_);
        auto it = pending_.find(resp.id());
        if (it != pending_.end()) {
            it->second.set_value(resp);
            pending_.erase(it);
        }
    }

    for (const auto& event : msg.events())
        handle_event(event);

    for (const auto& c : msg.compressed_instances()) {
        std::vector<uint8_t> out(c.uncompressed_size());
        int r = LZ4_decompress_safe(
            c.compressed().data(),
            reinterpret_cast<char*>(out.data()),
            (int)c.compressed().size(),
            (int)c.uncompressed_size()
        );
        if (r > 0) {
            Fopzo::Base::ServerMsg inner;
            if (inner.ParseFromArray(out.data(), r))
                handle_message(inner);
        }
    }
}

// обработчик эвентов
void FopzoClient::handle_event(const Fopzo::Base::Event& event) {
    events.dispatch(event);
}

// отправка реквестов
Fopzo::Base::Response FopzoClient::send_request(int64_t code, const std::vector<uint8_t>& payload, bool timeoutThrow = true) {
    std::string uuid = make_uuid();
    std::promise<Fopzo::Base::Response> promise;
    auto future = promise.get_future();
    {
        std::lock_guard<std::mutex> lock(pending_mutex_);
        pending_.emplace(uuid, std::move(promise));
    }
    send_packet(code, payload, uuid);
    if (future.wait_for(std::chrono::seconds(REQUEST_TIMEOUT_SEC)) == std::future_status::timeout) {
        std::lock_guard<std::mutex> lock(pending_mutex_);
        pending_.erase(uuid);
        if (timeoutThrow) throw std::runtime_error("request timeout");
    }
    
    Fopzo::Base::Response response = future.get();
    if (response.has_exception()) {
        throw std::runtime_error("RPC error: " + std::to_string(response.exception().code()));
    }
    return response;
}

void FopzoClient::do_hello() { 
    std::vector<uint8_t> iv(16);
    RAND_bytes(iv.data(), 16);

    Fopzo::Generated::CHGACEEHFADEDHH req;                     // helloRemoteService->hello
    req.set_dcagcdfchbbdcdb(rsa_.n().data(), rsa_.n().size()); // n
    req.set_gabafedddbeggae(rsa_.e().data(), rsa_.e().size()); // e
    req.set_cgcgbgbegcadabh(iv.data(), iv.size());             // iv
    std::string s = req.SerializeAsString();
    auto enc = cipher_.encrypt({s.begin(), s.end()});
    auto resp = send_request(1, enc);

    // проверка hello запроса
    if (resp.has_exception() || resp.data_size() == 0) {
        throw std::runtime_error("hello err");
    }

    std::vector<uint8_t> data(resp.data(0).one().begin(), resp.data(0).one().end());
    auto dec = cipher_.decrypt(data);
    Fopzo::Generated::BBFGDBCEGCBFBEE hello_resp;
    hello_resp.ParseFromArray(dec.data(), (int)dec.size());

    std::vector<uint8_t> enc_key(
        hello_resp.fbhhacgfchfeeed().begin(),
        hello_resp.fbhhacgfchfeeed().end()
    );

    auto aes_key = rsa_.decrypt(enc_key);
    cipher_.new_aes_cipher(aes_key, iv);
}

bool FopzoClient::do_handshake() {
    Fopzo::Generated::Handshake req;
    req.set_ticket(token_);
    std::string s = req.SerializeAsString();
    auto enc = cipher_.encrypt({s.begin(), s.end()});
    Fopzo::Base::Response resp;
    try {
        resp = send_request(3, enc);
    } catch (const std::exception& e) {
        std::cout << "[FopzoClient] handshake request failed " << e.what() << "\n";
        return false;
    }

    Fopzo::Generated::HandshakeResponse hand_resp;
    if (resp.data_size() > 0) {
        std::vector<uint8_t> data(resp.data(0).one().begin(), resp.data(0).one().end());
        auto dec = cipher_.decrypt(data);
        if (!hand_resp.ParseFromArray(dec.data(), (int)dec.size())) {
            std::cout << "[FopzoClient] failed parse handshake response\n";
            return false;
        } else {
            return true;
        }
    }
    return false;
}



bool FopzoClient::subscribe_trade(int item_defid) {
    Fopzo::Generated::SubscribeRequest req;
    req.set_topic("marketplace_trade_" + std::to_string(item_defid));
    std::string s = req.SerializeAsString();
    try { 
        send_request(41, {s.begin(), s.end()}); 
        return true; 
    }
    catch (...) {return false; }
}
