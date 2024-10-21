//
// Created by zjzjzjzj1874 on 2024/10/18.
//

#include <iostream>
#include "var.h"

using namespace std;

void var() {
    // 定义变量，局部变量，最好定义的时候就赋值，否则使用的时候没有赋值，会报错
    int a = 0, b= 0;
    cout << " before a == " << a << endl;
    cout << " before b == " << b << endl;

    // 重新给变量赋值
    a = 10;
    b = 100;
    cout << " after b == " << b << endl;
    cout << " after a == " << a << endl;
};
