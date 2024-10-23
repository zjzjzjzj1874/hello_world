//
// Created by zjzjzjzj1874 on 2024/10/22.
//

#include <iostream>
#include "data_type.h"

using namespace std;

void data_type() {
      // 1.整型
      {
            int a = 10;
            cout << "int a == " << a << endl;
            cout << "a的长度：" << sizeof a << endl;
            // short b = 65539; // 注意，这里如果溢出(>65535)，那么b=3
            short b = 10;
            cout << "short b == " << b << endl;
            cout << "b的长度：" << sizeof(b) << endl;
            // 无符号整型
            unsigned int c = 128731423;
            cout << "unsigned int c == " << c << endl;
      }


      // 2. char类型的数据，ASCII编码的特殊字符，0~127的数字
      {
            char d = 65; // ASCII 中，65代表A，下面会输出A
            cout << "char d == " << d << endl;
            char16_t e = 87;
            cout << "char16_t e == " << e << endl;
      }

      // 3. 布尔类型
      {
            bool b1 = true;
            cout << "bool b1 == " << b1 << endl;
            if (b1) {
                  cout << "b1 = true" << endl;
            } else {
                  cout << "b1 = false" << endl;
            }
      }

      // 4. 浮点类型
      {
            float f = 3.14f;
            cout << "浮点类型：float f == " << f << endl;
            // 科学计数法
            double g = 3.14e6;
            cout << "浮点类型：double g == " << g << endl;
            double h = 4.2e-5;
            cout << "浮点类型：double h == " << h << endl;
      }

      // 5. 字符字面常量
      {
            cout << "字面值常量：" << 036L << endl;
            cout << "字面值常量：" << typeid(036L).name() << endl;
            cout << "字面值常量：" << typeid(0x1ELL).name() << endl;

            char x = ',';
            cout << "字符字面量：x == " << x << endl; // 输出的为ASCII码','
            char y = x+1;
            cout << "字符字面量：y == " << y << endl; // 输出的为ASCII码'-'
            // 字符串，本质是一串字符的集合
      }

      // 6. 转义字符
      {
            char z = '\'';
            cout << "转义字符: z == " << z << endl;
            z = '?';
            cout << "转义字符: z == ?" << z << endl;
      }

      // 7. 类型转换
      {
            // 赋值时自动类型转换
            bool b2 = 25;
            cout << "类型转换：bool b2 == " << b2 << endl;

            // bool类型的值赋值给整型
            short w = true;
            cout << "类型转换：w == " << w << endl;

            // 浮点类型给整型 => 小数部分会被抹掉
            int itrans = 3.14;
            cout << "类型转换：itrans == " << itrans << endl;
            itrans = 3.94;
            cout << "类型转换：itrans == " << itrans << endl;
            // 溢出
            unsigned short us = 65536;
            cout << "溢出: us == " << us << endl;
      }
}