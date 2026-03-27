cmake_minimum_required(VERSION 3.16)
project(standfopzo)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -march=native")
find_package(Protobuf REQUIRED)
find_package(Boost REQUIRED COMPONENTS system)
find_package(OpenSSL REQUIRED)
find_package(PkgConfig REQUIRED)
pkg_check_modules(LZ4 REQUIRED liblz4)

protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS
    proto/messages.proto
    proto/schemes.proto
)

add_executable(fopzo
    src/main.cpp
    src/client.cpp
    src/utils/services.cpp
    ${SERVICES_SRCS}
    ${PROTO_SRCS}
)

target_compile_options(fopzo PRIVATE -Wno-deprecated-declarations)

target_include_directories(fopzo PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR}
    ${Protobuf_INCLUDE_DIRS}
    ${Boost_INCLUDE_DIRS}
    ${LZ4_INCLUDE_DIRS}
)

target_link_libraries(fopzo
    TgBot
    ${Protobuf_LIBRARIES}
    ${Boost_LIBRARIES}
    OpenSSL::SSL
    OpenSSL::Crypto
    ${LZ4_LIBRARIES}
    pthread
)
