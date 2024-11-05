//
// Created by zjzjzjzj1874 on 2024/11/4.
//

#include <iostream>

using namespace std;

#include "reference.h"

// 引用体验一下
void reference() {
    std::cout << "----------refer-Start-----------\n";
    {
        int a = 10, b = 25;
        int& ref = a; // a的引用别名，一种快捷方式。
        cout << "ref = " << ref << endl;
        cout << "a地址 = " << &a << endl;
        cout << "ref地址 = " << &ref << endl;

        ref = 15; // 原始数据也会被修改；
        cout << "a = " << a << endl;

        ref = b; // 把b的数据赋值给a；

        int& rref = ref; // 引用的引用，他俩都绑定的是a；别名，直接使用即可。
    }

    {// 对常量的引用
        const int zero = 0;
        const int& cref = zero; // 常量引用
        // cref = 10;// 错误，不允许修改
        cout << "cref = " << cref << endl;

        int i = 30;
        const int& cref2 = i; // 正确
        const int& cref3 = 10;
        double d = 3.14;
        const int& cref4 = d; // 正确，先把d强转成3，然后常量引用绑定的是临时量的3；
                              // 这时如果再对d修改，cref4的值不会再变化；见下面测试。

        cout << "before cref2 == " << cref2 << endl;
        i = 40;
        cout << "after cref2 == " << cref2 << endl;

        cout << "before d == " << d << endl;
        cout << "before cref4 == " << cref4 << endl;
        d = 1.23;
        cout << "after d == " << d << endl;
        cout << "after cref4 == " << cref4 << endl;
    }

    {// 引用和指针常量
    int a = 10;

    // 引用和指针常量
    int& ref = a;
    int* p = &a;
    ref = 20;
    cout << "a = " << a << endl;

    *p = 30;
    cout << "a = " << a << endl;

    cout << "a的地址：" << &a << endl;
    cout << "ref的地址：" << &ref << endl; // ref只是a的一个别名，在内存中不会占用空间
    cout << "p的地址：" << &p << endl; // p是一个指针类型，会占用空间
    cout << "p的值：" << p << endl; // p的值存的是a的地址；所以访问a的时候需要解引用；

    // 指针引用
    // 绑定指针的引用 => 因为指针也是一种数据类型，所以可以创建引用；
    int* ptr = &a;
    int*& pref = ptr; // pref就是指针的引用
    *pref = 100; // a的值变了
    cout << "a：" << a << endl;
    int b = 11;
    ptr = &b;

    cout << "a：" << a << endl;
    cout << "b：" << b << endl;
    *pref = 23;

    cout << "a：" << a << endl;
    cout << "b：" << b << endl;

    // 没有指向引用的指针，因为引用不存在地址；
    }
    std::cout << "----------refer-End-----------\n";
}