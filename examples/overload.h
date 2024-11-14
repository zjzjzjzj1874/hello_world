//
// Created by zjzjzjzj1874 on 2024/11/14.
//

#ifndef HELLO_WORLD_OVERLOAD_H
#define HELLO_WORLD_OVERLOAD_H

// 函数的重载
// 顶层const
void fun(int i);
// 使用常量作为形参，跟不加const完全等价，因为是值传递的，
//void fun(const int i);
void fun2(int* p);
// 指针常量其实也是常量，和不加const也是等价的；
//void fun2(int* const pc);

// 常量引用和引用
void fun3(int& i);
void fun3(const int& x);

// 常量指针和指针
void fun4(int* p);
void fun4(const int* p);

class overload {

};


#endif //HELLO_WORLD_OVERLOAD_H
