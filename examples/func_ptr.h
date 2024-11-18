//
// Created by zjzjzjzj1874 on 2024/11/14.
//
#include <string>
#include <iostream>

using namespace std;

#ifndef HELLO_WORLD_FUNC_PTR_H
#define HELLO_WORLD_FUNC_PTR_H

// 定义一个函数指针；
string(* fp) (string, int, double);

// 定义一个比较复杂的函数指针；
const string& (*fp1) (const string&, const string&);

class func_ptr {

};


#endif //HELLO_WORLD_FUNC_PTR_H
