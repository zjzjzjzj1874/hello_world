//
// Created by zjzjzjzj1874 on 2024/11/4.
//

#include <iostream>

using namespace std;

#include "enum.h"


//定义一个枚举类型
enum Week {
//    Mon, Tue, Wed, Thu, Fri, Sat, Sun // 这里分别是0，1，2，3，4，5，6
    Mon, Tue, Wed, Thu = 10, Fri, Sat, Sun // 这里已经变成了0，1，2，10，11，12，13
};

void my_enum() {
    std::cout << "----------enum-Start-----------\n";
    { // enum
        Week w1 = Mon, w2 = Tue;
        // Week w3 = 3; // 这个写法不符合规范
        Week w3 = Week(3); // 强制类型转换就可以了
        Week w5 = Week(20); // 强制类型转换就可以了

        cout << "w1: " << w1 << endl;
        cout << "w2: " << w2 << endl;
        cout << "w5: " << w5 << endl;
    }


    std::cout << "----------enum-End-----------\n";
}