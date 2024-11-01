//
// Created by zjzjzjzj1874 on 2024/10/31.
//
#include <iostream>
#include <vector>
#include <array>

#include "vector.h"

using namespace std;

// vector体验卡一张
void my_vector() {
    cout << "----------vector-Start-----------\n";
    {// Vector定义
        vector<int> v = {1,2,3};
        // 列表初始化
        vector<char> v1 = {'a','b','c'};
        vector<char> v2{'A','B','C'};
        // 直接初始化
        vector<short> v3(5);// 定义长度为5的vector，值为零
        vector<short> v4(5, 10);// 定义长度为5的vector，值都为10；

        // 元素访问，下标越界也是错误的，会报错退出。
        cout << "vector元素下标访问：" << v3[3] << endl;
        cout << "vector元素下标访问：" << v4[3] << endl;
        cout << "vector长度：" << v4.size() << endl;

        v2.push_back('d'); // 添加元素,尾巴上加元素

        // vector遍历
        cout << "vector2遍历" << endl;
        for (int i = 0; i < v2.size(); i++) {
            cout << v2[i] << "\t";
        }
        cout << endl;

        v2.pop_back(); // 弹出元素，从尾部弹出
        cout << "vector2 for遍历" << endl;
        for (char c : v2) {
            cout << c << "\t";
        }
        cout << endl;

        // 添加元素
        vector<int> vv;
        for (int i = 10; i > 0; i--) {
            vv.push_back(i);
        }
        cout << "遍历vv容器：" << endl;
        for (int num: vv) {
            cout << num << "\t";
        }
        cout << endl;
    }

    {// array模板
        // 申明数组,申明类型和长度，不足的使用对应类型的零值补齐
        array<int, 5> a = {1,2,3};
        cout << "array数组的遍历：" << a.size() << endl;
        for (int num:a) {
            cout << num << "\t";
        }
        cout << endl;

        int* aa = a.data();
        cout << "a.data == " << aa << endl; // 这是一个地址，看来CPP
    }

    cout << "----------vector-End-----------\n";
}