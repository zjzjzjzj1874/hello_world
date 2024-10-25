//
// Created by zjzjzjzj1874 on 2024/10/25.
//

#include <iostream>
#include "guess_number.h"

using namespace std;

void guess_number() {
    cout << "==============猜数字小游戏============" << endl;

    // 以当前时间为随机数种子，生成0-100的伪随机数
    srand(time(0));
    int target = rand() % 100;

    cout << "规则：输入0-100的数字，有五次机会\n";
    int i = 0; // 猜的次数

    bool gr = false; // 猜的结果
    while (i < 5) {
        cout << "请输入0-100的您猜的数字：\n";
        int num = 0;
        cin >> num;

        if (num == target) {
            gr = true;
            break;
        }
        i++;

        cout << "很遗憾，本次您猜错了！\n";
    }

    gr ? cout << "游戏结束，恭喜您猜中了！\n" : cout << "游戏结束，您猜错了，正确数字为：" << target << endl;
}