cmake_minimum_required(VERSION 3.29)
project(hello_world)

set(CMAKE_CXX_STANDARD 11)

add_executable(hello_world main.cpp
        01.welcome.cpp
        01.welcome.h
        02.var.cpp
        03.data_type.cpp
        04operator.cpp
        05flow.cpp
        examples/guess_number.cpp
        examples/love_curve.cpp
        examples/array.cpp
        examples/sort.cpp
        examples/vector.cpp
        examples/string.cpp
        examples/file.cpp
        examples/struct.cpp
        examples/enum.cpp
        examples/ptr.cpp
        examples/reference.cpp
        examples/func.cpp
)
