//
// Created by zjzjzjzj1874 on 2024/10/25.
//

#include <iostream>
#include "array.h"

using namespace std;

void my_array() {
  cout << "============================复合数据类型：数组============================\n";

  { // 数组定义
     int a1[10];

     const int n = 4;
     int a2[n];

     int m = 5;
     int a3[m];

     // 局部变量，申明后不初始化，会报错
     int a4[4] = {1,3,5,7};
     double a5[] = {2,4,6,8};
     float a6[10] = {1,2,3}; // 可以，前三个是1，2，3，其他没初始化的就是0；

     // int a8[4] = a4; // 错误,不能使用一个数组对另一个数组进行初始化。

     // char数组的初始化
     char c[10];
     cout << "数组：c == " << c << endl;
  }

  {// 数组访问
    // 1.角标访问： 数组名[下标]
    int a[] = {1,3,5,7,9};
    cout << "a[2] === " << a[2] << endl;
    //    cout << "a[5] === " << a[5] << endl;
    //    a[5] = 100; // 危险操作！！！
    //    cout << "a[5] === " << a[5] << endl;
    cout << "a数组所占空间大小字节为：" << sizeof(a) << endl;
    cout << "a数组中每个元素所占空间大小字节为：" << sizeof(a[0]) << endl;
    int aSize = sizeof(a)/sizeof(a[0]);
    cout << "a数组长度：" << aSize << endl;

    // 循环遍历
    for (int i =0; i < aSize; i++) {
      cout << "遍历：a[" << i << "] == " << a[i] << endl;
    }
    for (int num:a) {
      cout << "遍历：" << num << endl;
    }
  }
  {// 多维数组
    // 二维数组
    int a[4][4] = {1,2,3,4,5,6}; // 剩下的用0补全

    int a2 [3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {4,3,2,1},
    }; // 两种方式, 多花括号：直观

    int a3 [][4] = {1,2,3,4,5,6,7,8,4,3,2,1 }; // 编译器可以自动推断


    // 三维数组
    int a1[4][4][4];
  }
}