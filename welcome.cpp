//
// Created by zjzjzjzj1874 on 2024/10/18.
//

#include <iostream>
#include "welcome.h"

using namespace std;

/*
 * 定义函数：一个欢迎函数
 * 作用：捕获标准输入的字符串
 */
void welcome() {
    cout << "请输入您的姓名：\n";

    // 定义一个字符串，用于接收下面的标准输入
    string name;
    cin >> name;

    cout << "欢迎：" << name << "加入群聊。\n";
}