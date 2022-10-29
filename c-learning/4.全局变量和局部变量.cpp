#include <iostream>
using namespace std;

////1. 全局变量声明
//int g;
//int main()
//{
//    // 局部变量声明
//    int a, b;
//
//    // 实际初始化
//    a = 10;
//    b = 20;
//    g = a + b;  //input is 30
//
//    cout << g;
//    return 0;
//}


// 2.全局变量声明
int g = 20;

int main()
{
    // 局部变量声明
    int g = 10;

    cout << g; //input is 10
    return 0;
}