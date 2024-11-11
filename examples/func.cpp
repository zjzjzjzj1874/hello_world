//
// Created by zjzjzjzj1874 on 2024/11/7.
//
#include <iostream>
#include "func.h"

// 函数的定义

// 定义：一个平方函数 y = x*x;
int square(int x) {
    return x*x;
}

// 求两数的立方和: z = x^3 + y^3;
int cubeSum(int x, int y) {
    return pow(x,3) + pow(y, 3);
}

// N的阶乘
int factorial(int x) {
    int result = 1;
    for (int i = 1; i <= x; i++) {
        result *= i;
    }

    return result;
}

// 复制字符串
std::string copyString(const std::string &s, int n) {
    std::string ss;
    for (int i = 0; i < n; i++) {
        ss += s;
    }
    return ss;
}

// 统计函数被调用的次数
int callCount() {
    // 静态对象，局部对象，生命周期贯穿整个程序周期，但是外部不可访问
    // 静态对象申明后，如果自己为初始化，系统会默认初始化为0值；
    // 静态对象申明只会发生一次，换句话，即使再次执行到什么的语句，不会重复申明
    static int count = 0;
    count++;

    return count;
}

// 递增:传值
//void increase(int n) {
//    ++n;
//}
// 传指针
void increase(int* n) {
    ++(*n);
}
// 传引用
void increase(int& n) {
    ++n;
}

// 比较字符串长度: 常量引用，const表示不允许修改数据
bool isLonger(const std::string& s1, const std::string& s2) {
    return s1.size() > s2.size();
}

// 遍历数组元素进行打印，const表示不允许修改数组
void printArray(const int* arr, int size) {
    for (int i = 0; i < size; i++)  std::cout << arr[i] << "\t";
    std::cout << std::endl;
}

// 数组引用遍历
void printArray(const int(& arr)[7]) {
    for (int num : arr) std::cout << num << "\t";

    std::cout << std::endl;
}

// 两数交换
void swap(int& a, int& b) {
    if (a == b)
        return;

    int temp = a;
    a = b;
    b = temp;
}

// 返回较长的字符串
const std::string& longerString(const std::string& s1, const std::string& s2){
    return s1.size() > s2.size() ? s1 : s2;
}
