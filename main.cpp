#include <iostream>

// 这里指定命名空间，如果这里指定，下面则无需指定；
using namespace std;

int main() {
    // std::cout是iostream提供的标准的输出流；std是命名空间，CPP中用::指明，其他语言可能是std.cout
    std::cout << "Hello, World!" << std::endl;

    // 返回0可省
    return 0;
}
