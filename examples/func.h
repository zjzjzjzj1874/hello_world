//
// Created by zjzjzjzj1874 on 2024/11/7.
//

# pragma once

#ifndef FUNC_H
#define FUNC_H

// 函数的申明：形参也可以省略

// 定义：一个平方函数 y = x*x;
int square(int);
// int square(int x);

// 求两数的立方和: z = x^3 + y^3;
int cubeSum(int x, int y);

// 求N的阶乘: result = n*(n-1)*(n-2)*...*2*1;
int factorial(int n);

// 复制字符串n次
std::string copyString(const std::string& s, int n);

// 函数调用次数统计
int callCount();

// 递增，重载，一个传值，一个传引用；
// void increase(int n);
// 传指针
void increase(int* n);
// 传引用
void increase(int& n);

// 比较字符串长度
bool isLonger(const std::string& s1, const std::string& s2);

// 遍历数组元素进行打印 => 下面三个定义完全一致；
// void printArray(const int* arr);
// void printArray(const int arr[]);
// void printArray(const int arr[5]);
void printArray(const int* arr, int size);

// 使用数组引用作为形参 => 但是数组长度已经确定了
void printArray(const int(& arr)[7]);

// 定义一个元素互换的函数
void swap(int& x, int& y);


class func {

};



#endif //FUNC_H
