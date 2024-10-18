cmake_minimum_required(VERSION 3.29)
project(hello_world)

set(CMAKE_CXX_STANDARD 11)

add_executable(hello_world main.cpp
        welcome.cpp
        welcome.h
)
