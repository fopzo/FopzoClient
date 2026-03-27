## Пример кода c getPlayer2Request (получение локального профиля)
```cpp
#include <iostream>
#include <memory>
#include <chrono>
#include <thread>
#include <ctime>
#include <sstream>
#include <iomanip>
#include <string>
#include <boost/asio.hpp>
#include <boost/asio/ssl.hpp>

#include "client.hpp"
#include "schemes.pb.h"

std::unique_ptr<FopzoClient> client;

int main(int argc, char* argv[]) {
    client = std::make_unique<FopzoClient>("Your handshake");

    client->on_connect([]{
        client->log("getPlayer2 example");

        try {
            Fopzo::Generated::GetPlayerRequest req_one; // Запрос
            auto resp = client->services->PlayerRemoteService.getPlayer2Request(req_one); // Ответ

            if (resp && resp->has_player()) { // Вывод информации
                const auto& p = resp->player();
                client->log("Name: " + p.name());
                client->log("Uid:" + p.uid());
                client->log("Time in game (sec): "+ std::to_string(p.timeingame()));
            } else {
              client->log("Error to get player from getPlayer2:");
            }
        } catch (const std::exception& e) { // Обработчик ошибок
            client->log("Error getPlayer2: " + std::string(e.what()));
        }
    });

    client->start(); // Запуск клиента
    client->idle(); // Ждет завершение клиента
    return 0;
}
```