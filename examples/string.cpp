//
// Created by zjzjzjzj1874 on 2024/11/1.
//

#include <iostream>
#include <string>

#include "string.h"

using namespace std;

void my_string() {
    cout << "----------vector-Start-----------\n";
    {// 定义及申明及初始化
        // 默认初始化，空的字符串
        string s1;

        // 拷贝初始化；
        string s2 = s1;
        string s3 = "Hello World!"; // 字面值常量赋值给s3

        // 直接初始化
        string s4("Hello World!");
        string s5(8, 'h'); // 8个h组合的

        cout << "s4 = " << s4 << endl;
        cout << "s5 = " << s5 << endl;


        // 访问字符,也可以直接修改
        cout << "s4[2] == " << s4[2] << endl; // 访问s4="Hello world"的第三个字符，输出应该为'l'
        cout << "s4[s4.size()-1] == " << s4[s4.size()-1] << endl;
        s4[s4.size()-1] = '?'; // 修改最后一个元素
        cout << "s4[s4.size()-1] == " << s4[s4.size()-1] << endl;

        // 把字母转成大写
        for (int i = 0; i < s4.size(); i++) {
            s4[i] = toupper(s4[i]);
        }
        cout << "upper，被转成大写字母后输出：" << s4 << endl;
    }
    {// 字符串拼接
        string s1 = "Hello", s2 = "World";
        string s3 = s1+s2;
        cout << "s3 == " << s3 << endl;
        string s4 = s1 + " " + " " + s2 + "!";
        cout << "s4 == " << s4 << endl;
        // string s5 = "hello" + "world"; // 错误的表达式，C++不支持
    }
    {// 字符串的比较
        string s1 = "hello", s2 = "hello world.";
        bool b = s1 == s2; // false: 0
        cout << "s1 == s2:" << b << endl;
        b = s1 < s2; // true: 1
        cout << "s1 < s2:" << b << endl;
        b = s1 > s2; // false: 0
        cout << "s1 > s2:" << b << endl;
    }
    {// 字符串本质就是字符的数组；C语言中，使用`char[]`来表示字符串，不过为了区分纯粹的`字符数组`和`字符串`;C语言规定，
    // 字符串必须以空字符串(`'0'`)结束,专门用来标记字符串的结尾。
        char c1[5] = {'h','e','l','l','o'}; // 这是一个字符数组，不是字符串
        char c2[6] = {'h','e','l','l','o','\0'}; // 这是一个字符串
        cout << "c1 === " << c1 << endl;
        cout << "c2 === " << c2 << endl;

        char c3[] = "hello"; // 这个不用定义长度，编译器自己会推断的
        cout << "c3 === " << c3 << endl;
        cout << "c3长度：" << sizeof c3 << endl; // 长度为6：因为有\0补齐。
    }

    { // 标准输入读取
        cout << "请输入字符串：" << endl;
        // 字符串读取
//        string str;
//        cin >> str; // 如果输入hello World，只会输出hello，因为遇到空白符(回车、空格、制表符等)会停止；
//        cout << "str = " << str << endl;

//        string s1,s2;
//        cin >> s1 >> s2;
//        cout << "s1 = " << s1 << endl;
//        cout << "s2 = " << s2 << endl;

        // 一整行读取
//        string s;
//        getline(cin, s);
//        cout << "s === " << s << endl;

        // 字符读取
        char ch;
//        ch = cin.get();
//        cout << "ch = " << ch << endl;

//        cin.get(ch);
//        cout << "ch = " << ch << endl;
    }






    cout << "----------vector-End-----------\n";
}