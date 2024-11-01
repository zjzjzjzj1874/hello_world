//
// Created by zjzjzjzj1874 on 2024/11/1.
//
#include <iostream>
#include <fstream>
#include <string>

#include "file.h"

using namespace std;

// file体验
void file() {
    cout << "----------file-Start-----------\n";
    {// 读取文件
        ifstream input("~/CLionProjects/hello_world/examples/input.txt");

        // 1.按照单词逐个读取；
//        string word;
//        while (input >> word) {
//            // 这里分隔的规则是空白符(回车、空格、制表符等)
//            cout << word << endl;
//        }

        // 2.逐行读取
//        string line;
//        while (getline(input, line)) {
//            cout << line << endl;;
//        }

        // 3.逐个字符读取
//        char ch;
//        while (input.get(ch)) { // 注意，中文会乱码。
//            cout << ch << endl;
//        }
    }
    { // 写入文件
        ofstream output("~/CLionProjects/hello_world/examples/output.txt");

        for (int i = 0; i < 5; i++) {
            output << "i == " << i << endl;
        }
    }


    cout << "----------file-End-----------\n";
}