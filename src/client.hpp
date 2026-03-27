#pragma once
#include <string>
#include <vector>
#include <unordered_map>
#include <functional>
#include <memory>
#include <mutex>
#include <condition_variable>
#include <thread>
#include <atomic>
#include <future>

#include <boost/asio.hpp>
#include <boost/asio/ssl.hpp>

#include "utils/cipher.hpp"
#include "messages.pb.h"
#include "schemes.pb.h"

#include "utils/services.hpp"
#include "utils/events.hpp"
namespace asio = boost::asio;
using tcp = asio::ip::tcp;
namespace ssl = asio::ssl;

using TradeCallback = std::function<void(
    const std::string&, int, float, int,
    const std::unordered_map<std::string,std::string>&
)>;
using ConnectCallback = std::function<void()>;

class FopzoClient {
public:
    static constexpr const char* SERVER_HOST = "server.boltgaming.io";
    static constexpr uint16_t SERVER_PORT = 2223;
    static constexpr int REQUEST_TIMEOUT_SEC = 15;
    std::atomic<int> ping_{0};

    std::atomic<bool>         running_{false};
    std::atomic<bool>         connected_{false};

    explicit FopzoClient(std::string token, int max_retries = 3);
    ~FopzoClient();

    void start();
    void stop();
    void idle();
    void log(const std::string& msg);
    
    void on_connect(ConnectCallback cb) { on_connect_ = std::move(cb); }
    void on_trade(TradeCallback cb)     { on_trade_   = std::move(cb); }

    bool subscribe_trade(int item_definition_id);

    Fopzo::Base::Response send_request(int64_t code, const std::vector<uint8_t>& payload);

    std::vector<uint8_t> encrypt(const std::vector<uint8_t>& data) { return cipher_.encrypt(data); }
    std::vector<uint8_t> decrypt(const std::vector<uint8_t>& data) { return cipher_.decrypt(data); }

    bool connected() const { return connected_; }

    Events events;
    std::unique_ptr<class Services> services;
    

private:
    std::chrono::steady_clock::time_point last_ping_sent_;

    asio::io_context          ioc_;
    ssl::context              ssl_ctx_;
    std::unique_ptr<ssl::stream<tcp::socket>> socket_;

    std::string               token_;
    FCipher             cipher_;
    RSAKeyPair                rsa_;

    std::mutex                connect_mutex_;
    std::condition_variable   connect_cv_;

    std::thread               io_thread_;
    std::thread               read_thread_;
    std::mutex                stop_mutex_;
    std::mutex                send_mutex_;

    std::mutex                pending_mutex_;
    std::unordered_map<std::string, std::promise<Fopzo::Base::Response>> pending_;

    ConnectCallback on_connect_;
    TradeCallback   on_trade_;

    void run_loop();
    void read_loop();
    void do_hello();
    bool do_handshake();

    void send_raw(const std::vector<uint8_t>& data);
    void send_packet(int64_t code, const std::vector<uint8_t>& payload, const std::string& uuid);
    void fire_packet(int64_t code, const std::vector<uint8_t>& payload);
    
    void handle_message(const Fopzo::Base::ServerMsg& msg);
    void handle_event(const Fopzo::Base::Event& event);

    std::vector<uint8_t> read_exactly(size_t n);
    uint32_t read_header();
    static std::string make_uuid();

    int max_retries_; 
    int retry_count_ = 0;
};
