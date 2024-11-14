//
// Created by zjzjzjzj1874 on 2024/11/14.
//

#include <iostream>

#include "overload.h"

void fun(int i) {
    std::cout << i << std::endl;
}
//void fun(const int i) {}

void fun2(int* p) {}
//void fun2(int* const pc) {};

// 引用
void fun3(int& i) {
    std::cout << 1 << std::endl;
}
// 常量引用
void fun3(const int& x) {
    std::cout << 2 << std::endl;
}

// 指针和指向常量的指针
void fun4(int* p) {
    std::cout << 3 << std::endl;

}
void fun4(const int* p) {
    std::cout << 4 << std::endl;
}