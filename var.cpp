//
// Created by zjzjzjzj1874 on 2024/10/18.
//

#include <iostream>
#include "var.h"

using namespace std;

// 申明全局变量 => 可以不初始化，会被编译器默认初始化为对应类型的零值
int number; // 等价于 int number = 0;

void var() {
    cout << "----------变量定义篇章-Start-----------\n";

    // 定义变量，局部变量，最好定义的时候就赋值，否则使用的时候没有赋值，会报错
    int a = 0, b= 0;
    cout << " before a == " << a << endl;
    cout << " before b == " << b << endl;

    // 重新给变量赋值
    a = 10;
    b = 100;
    cout << " after b == " << b << endl;
    cout << " after a == " << a << endl;

    int number = 1;
    cout << "局部：number = " << number << endl;
    cout << "全局：number = " << ::number << endl;


    const float Pi = 3.14159;
    cout << "PI: " << PI << endl;
    cout << "Pi: " << Pi << endl;

    cout << "----------变量定义篇章-End-----------\n";
};
