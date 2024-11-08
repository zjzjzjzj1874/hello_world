#include <iostream>

#include "01.welcome.h"
#include "02.var.h"
#include "03.data_type.h"
#include "04operator.h"
#include "flow.h"
#include "examples/guess_number.h"
#include "examples/love_curve.h"
#include "examples/array.h"
#include "examples/sort.h"
#include "examples/vector.h"
#include "examples/string.h"
#include "examples/file.h"
#include "examples/struct.h"
#include "examples/enum.h"
#include "examples/ptr.h"
#include "examples/reference.h"
#include "examples/func.h"

// 这里指定命名空间，如果这里指定，下面则无需指定；
using namespace std;

// 定义一个欢迎函数,空返回
void welcomeInMain() {
    // 提示用户输入姓名
    cout << "请输入您的姓名...\n";

    // 等待键盘输出，以回车为结束标志。
    string name; // 使用变量保存用户输入信息
    cin >> name;
    cout << "welcome：" << name << endl;
}


/*
 * 主函数，主程序入口
 * 输出hello world
 */
int main() {
    // std::cout是iostream提供的标准的输出流；std是命名空间，CPP中用::指明，其他语言可能是std.cout
    // << 标准输出的输出操作符
    std::cout << "Hello, World!" << std::endl;

    // 这一句和上面一句等价，表示自己结束这一行。
    std::cout << "Hello, World with self end.\n";

    // 这里无需使用命名空间，因为上面已经申明了命名空间了
    // cout << "hello World" << endl;
    // cerr << "error in hello world" << endl;
    // clog << " log in hello world" << endl;

    {
        int a = 10, b = 20;
        swap(a, b);
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }

    int arr[] = {2,5,4,7,9,6,3};
    printArray(arr, sizeof(arr)/sizeof(arr[0]));

    printArray(arr);

    int i = 0;
    increase(i);
    cout << "i == " << i << endl;

    for (int i = 0; i < 20; i += 2) {
        cout << "调用次数：" << callCount() << endl;
    }

    const string& s = "hello, world!";
    cout << "复制5次后：" << copyString(s,5) << endl;

    cout << "3*3 = " << square(3) << endl;
    cout << "9! = " << factorial(9) << endl;
    cout << "3^3 + 4^3 = " << cubeSum(3, 4) << endl;

    const vector<vector<int>>& ms = {
        {vector<int>{4,9,2}},
        {vector<int>{3,5,7}},
        {vector<int>{8,1,6}},
    };
    bool b = isMagicSquare(ms);
    cout << (b ?"是幻方":"不是幻方") << endl;

    // 翻转数组
    reverse_arr(arr, sizeof(arr));
    for (int num : arr) {
        cout << num << "\t";
    }
    cout << endl;

    // reference体验
    reference();

    // 指针体验卡
    ptr();

    // enum体验
    my_enum();

    // struct体验
    my_struct();

    // file体验
    file();

    // string体验卡
    my_string();

    // vector体验卡
    my_vector();

    // 变量函数的调用
    var();

    select_sort(arr, sizeof(arr));
    cout << "选择排序之后：" << endl;
    for (int num: arr) {
        cout << num << "\t";
    }
    cout << endl;

    int ba[] =  {2,5,4,7,9,6,3};
    bubble_sort(ba, sizeof(ba));
    cout << "冒泡排序之后：" << endl;
    for (int num: ba) {
        cout << num << "\t";
    }
    cout << endl;

    // 数据类型函数的调用
    data_type();

    // 运算符
    operator4();

    // 流程控制
    flow();

    // 数组
    my_array();

    // 爱心曲线
    love_curve();

    // 猜数字小游戏
    guess_number();

    // 函数调用
    welcome();

    // // 调用系统底层
    // system("pause");
    // 返回0可省

    // 全在main函数中，是一个典型的面向对象的过程。
    return 0;
}
