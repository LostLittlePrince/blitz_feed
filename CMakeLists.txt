cmake_minimum_required(VERSION 3.20)

project(blitz_feed VERSION 0.1.0 LANGUAGES CXX)

add_executable(server
    src/server/main.cpp
)

target_include_directories(server PRIVATE include)