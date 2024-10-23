//
// Created by zjzjzjzj1874 on 2024/10/23.
//

#include <iostream>
#include "04operator.h"

using namespace std;

void operator4() {
    cout << "----------运算符篇章-Start-----------" << endl;
    { // 算术运算符
        int a = 1, b = 2, c = 3, d = 4;
        int res = a+b-c*d;
        cout << "a+b-c*d = " << res << endl;
        cout << "除法：20/3 = "<< 20/3 << endl; // 整型/整型 = 整型
        cout << "除法：20/3.0 = "<< 20/3.0 << endl; // 整型/浮点 = 浮点 ==> 运算符重载!!!
        cout << "取模：20%3 = "<< 20%3 << endl; // 取模只能是整数
    }

   { // 赋值运算符：=
        int a = 1;
        // 1 = a; // 错误
        // 数组赋值
        int arr[] = {1, 2, 3, 4, 5};
        // 连续赋值
        int b,c;
        b = c = 20;

        cout << "arr = " << arr << "; b = " << b << "; c == " << c << endl;

        int sum = 0;
        sum += a; // 复合赋值运算符
        sum += b;
        sum += c;
        cout << "sum = " << sum << endl;

        // 自增自减运算符 ==> 前置时，对象先加一，再将更新之后的对象值作为结果返回；后置时，对象先将原始值作为结果返回，再加一
        cout << "原始b：" << b << "; 原始c：" << c << endl;
        cout << "++b：" << ++b << endl;
        cout << "c++：" << c++ << endl;
   }

   { // 条件运算符 = 三目运算符
        int a = 10;
        int b = 20;
        string c = "";

        a > b ? c = "a大于b" : c = "a小于等于b";

        cout << "C: " << c << endl;
   }

   { // 位运算符
        unsigned char bit = 0xb5;
        cout << hex; // 后面的使用0x 16进制打印
        cout << "bit左移两位：" << (bit<<2) << endl;
        cout << "bit右移三位：" << (bit>>3) << endl;

        cout << dec; // 10进制打印，其他的bin二进制，oct八进制
        cout << "200左移3位：" << (200<<3) << endl; // 扩大八倍
        cout << "200右移3位：" << (200>>3) << endl; // 缩小八倍

        // 位逻辑运算
        cout << "位逻辑运算 ~5：" << ~5 << endl;
        cout << "位逻辑运算 5&12：" << (5&12) << endl;
        cout << "位逻辑运算 5|12：" << (5|12) << endl;
        cout << "位逻辑运算 5^12：" << (5^12) << endl;
   }

   { // 类型转换
        // 隐式类型转换
        short s = 15.2+20; // 长度较小的类型转换成较大的类型，避免精度丢失。15.2 double(8)，20 int(4)
        cout << "s == " << s << endl;
        cout << "15.2+20 == " << 15.2+20 << endl;
        cout << "s 长度 == " << sizeof s << endl;
        cout << "15.2+20 长度 == " <<  sizeof (15.2+20) << endl;

        // 强制类型转换
        cout << "C语言风格：" << (double)20/3 << endl;
        cout << "C++语言风格：" << double(20)/3 << endl;
        cout << "C++强制语言风格：" << static_cast<double>(20)/3 << endl;
   }
    cout << "----------运算符篇章-End-----------" << endl;
}
