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
    int target = rand() % 50;

    cout << "规则：输入0-50的数字，有五次机会\n";
    int i = 0; // 猜的次数

    bool gr = false; // 猜的结果
    while (i < 5) {
        cout << "请输入0-50的您猜的数字：\n";
        int num = 0;
        cin >> num;

        if (num == target) {
            gr = true;
            break;
        } else if (num > target) {
            cout << "您猜的数字偏大！\n";
        } else {
            cout << "您猜的数字偏小！\n";
        }
        i++;
    }

    gr ? cout << "游戏结束，恭喜您猜中了！\n" : cout << "游戏结束，您猜错了，幸运数字为：" << target << endl;
}