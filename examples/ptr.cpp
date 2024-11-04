//
// Created by zjzjzjzj1874 on 2024/11/4.
//
#include <iostream>

using namespace std;

#include "ptr.h"

void ptr() {
    std::cout << "----------ptr-Start-----------\n";
    {// 指针定义
        int* p1; // p1是指向int类型数据的指针
        long* p2; // p2是指向long类型数据的指针

        cout << "p1在内存中长度为："<< sizeof(p1) << endl;
        cout << "p2在内存中长度为："<< sizeof(p2) << endl;



        int a = 10, b = 20;
        long c = 35;
        p1 = &a;
        p2 = &c;

        cout << "a地址：" << &a << endl;
        cout << "b地址：" << &b << endl;
        cout << "c地址：" << &c << endl;

        cout << "p1 = " << p1 << endl;
        cout << "p2 = " << p2 << endl;


        // 通过指针访问对象
        cout << "p指向内存中，存放的值为 = " << *p1 << endl;
    }

    { // 无效指针
        // 空指针 => 但是有对应的数据类型，区别于void
        int* np = nullptr; // 定义一个空指针
        np = NULL; // 空指针
        np = 0; // 零值 => 也是空指针，np= 1这些都不行。

        int zero = 0;
        cout << "np == " << np << endl;

        // void*指针
        int i = 100;
        char ch = 'a';
        string s = "hello";

        void* vp = &i; // 存放
        vp = &ch;
        vp = &s;
        // *vp; // 解引用，不允许，void*只能存放指针，解引用不知道要拿几个字节接收。
    }

    {// 指针的指针
        int i = 1024;
        int* pi = &i;
        int** ppi = &pi;

        cout << "i = " << i << endl;
        cout << "pi = " << pi << endl;
        cout << "ppi = " << ppi << endl;

        cout << "*pi = " << *pi << endl; // i的值 = 1024
        cout << "*ppi = " << *ppi << endl; // pi的值
        cout << "**ppi = " << **ppi << endl; // i的值 = 1024
    }
    {// 指向常量的指针
        const int c1 = 10, c2 = 20;
        const int* pc = &c1; // pc是指向int类型常量的指针
        cout << "*pc = " << *pc << endl;
        // *pc = 15; // 非法，pc此时是指向常量的指针，因为常量不可修改;
        // 但是pc本身是变量，所以pc还可以重新赋值
        pc = &c2;
        cout << "*pc = " << *pc << endl;

        // 指针常量，const指针
        int i = 10;
        int* const cp = &i;
        // cp = &c1;  // 因为这个指针是常量，不能再修改；
        // 但是指针指向的是一个变量，是可以修改的
        *cp = 200;
        cout << "*cp = " << *cp << endl;
    }
    {// 指针和数组
        int arr[] = {1,2,3,4,5};
        cout << "arr = " << arr << endl;
        cout << "&arr[0] = " << &arr[0] << endl;
        cout << "&arr[1] = " << &arr[1] << endl;

        // 所以对数组解引用，本质是打印第一个元素
        cout << "*arr = " << *arr << endl;
        *arr = 10086;
        for (int num : arr) {
            cout << num << "\t";
        }
        cout << endl;

        // 指针运算
        int* pia = arr;
        *(pia+1) = 100;
        *(arr+3) = 10; // 这里也可以
        for (int num : arr) {
            cout << num << "\t";
        }
        cout << endl;
    }
    {// 指针数组和数组指针
        int* pa[5]; // 指针数组：长度40
        int(* ap)[5]; // 指向数组的指针:长度8

        cout << "pa在内存中的长度：" << sizeof(pa) << endl;
        cout << "ap在内存中的长度：" << sizeof(ap) << endl;

        int arr[] = {1,2,3,4,5};
        int i = 10;
        pa[0] = &i;
        pa[1] = arr;
        pa[2] = arr+2; // 指针运算

        ap = &arr; // 数组的指针
    }


    std::cout << "----------ptr-End-----------\n";
}