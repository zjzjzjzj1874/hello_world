//
// Created by zjzjzjzj1874 on 2024/10/23.
//

#include <iostream>
#include "flow.h"

using namespace std;

void flow() {
    cout << "----------流程控制篇章-Start-----------" << endl;
    { // 条件分支if
        int age;
        cout << "请输出年龄: ";
        // cin >> age;
        age = 10;
        if (age >= 18) {
            cout << "欢迎进入直播间。" << endl;
        } else {
            cout << "未成年，限制进入。" << endl;
        }
        // 三元表达式
        age >= 18 ? cout << "欢迎进入直播间！！！" << endl : cout << "未成年，限制进入!!!" << endl;
        cout << (age >= 18? "(三元简洁)欢迎进入直播间":"(三元简洁)未成年限制入内。") << endl;

        if (age < 12) {
            cout << "欢迎小朋友。" << endl;
        } else if (age < 18) {
            cout << "欢迎青少年。" << endl;
        } else {
            cout << "欢迎成年人。" << endl;
        }
    }
    { // 条件分支 switch
        char grade;
        cout << "请输出成绩(ABCD): ";
//        cin >> grade;
        grade = 'A';
        switch (grade) {
          case 'A':
              cout << "成绩优秀。" << endl;
              break;
          case 'B':
              cout << "成绩良好。" << endl;
              break;
          case 'C':
              cout << "成绩及格。" << endl;
              break;
          default:
              cout << "成绩错误！！" << endl;
              break;
        }
    }

    {// 循环
        int i = 0;
        while (i<10) {
            cout << "while循环：Hello World: " << ++i << endl;
            // cout << "循环：Hello World: " << ++i << endl;
        }
        do {
            cout << "do while：Hello World: " << i-- << endl;
        } while (i>0);

        for (int j = 0; j < 10; j++) {
            cout << "for：Hello World: " << j << endl;
        }
        for (int num: {1,2,3,4,5}) {
            cout << "序列中输出num：" << num << endl;
        }
        // 九九乘法表打印
        for (int i = 1; i <= 9; i++) {
            for (int j = 1; j <= i; j++) {
               cout << j << " x " << i << " = " << i*j << "\t"; // 制表符合适
            }
            cout << endl;
        }
        // 缝7过的小游戏：100以内的数字
        for (int i = 1; i < 100; i++) {
            cout << '\t' ;
            // i%7：7的倍数：i%10==7:个位数是7；i/10==7：十位数是7
            if (i%7 == 0 || i%10 == 7 || i/10 == 7) {
                continue;
            }
            cout << i;
            if (i%10 == 0) {
                cout << endl;
            }
        }
        cout << endl;
    }
    {// goto用法
          int m = 0;
begin:
          do {
            cout << "goto:" << m++ << endl;
          } while(m < 10);

          if (m < 15) {
              goto begin;
          }
    }

    cout << "----------流程控制篇章-End-----------" << endl;
}