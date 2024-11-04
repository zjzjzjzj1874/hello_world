//
// Created by zjzjzjzj1874 on 2024/11/1.
//
#include <iostream>
#include <string>
#include "struct.h"

using namespace std;

// 结构体定义
struct Student { // 和类比较类似
    string name; // 名字
    int age; // 年龄
    double score; // 分数
}stu2, stu3 = {"小明", 19,70}; // 定义结构体后立即创建对象，stu2是空对象，stu3有值 ==> 不推荐

// 输出一个对象的完整信息
void printStu(Student stu) {
    cout << "name:" << stu.name << "\t age:" << stu.age << "\t score:" << stu.score << endl;
}

void my_struct() {
    std::cout << "----------struct-Start-----------\n";
    {
        // 申明一个Student的对象并初始化
        Student stu = {"张三", 18,60};
        // 使用另一个结构体对象进行赋值
        Student stu4 = stu3;

        // 访问数据
        printStu(stu);
        printStu(stu3);
        stu2.name = "赵大";
        stu2.age = 20;
        stu2.score = 80;
        printStu(stu2);
    }

    {// 结构体数组
        Student s[3] = {
            {"小红",17, 66.5},
            {"小白",16, 72.5},
            {"小蓝",15, 85.5},
        };
        printStu(s[0]);

        for (Student stu : s) {
            printStu(stu);
        }
    }



    std::cout << "----------struct-End-----------\n";
}