#include <iostream>

using namespace std;

int main()
{
    //1.指针
    int  var = 20;   // 实际变量的声明
    int* ip;        // 指针变量的声明
    ip = &var;       // 在指针变量中存储 var 的地址
    cout << "Value of var variable: ";
    cout << var << endl;
    // 输出在指针变量中存储的地址
    cout << "Address stored in ip variable: ";
    cout << ip << endl;
    // 访问指针中地址的值
    cout << "Value of *ip variable: ";
    cout << *ip << endl;

    //2.NULL指针
    int* ptr1 = NULL; //地址为内存的初地址000000
    cout << "ptr1的值是：" << ptr1 << endl;

    //3.指针数组
    int  var2[3] = { 10, 100, 200 };
    int* ptr2[3];
    for (int j = 0; j < 3; j++)
    {
        ptr2[j] = &var2[j]; // 赋值为整数的地址
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Value of var2[" << i << "] = ";
        cout << *ptr2[i] << endl;
    }

    //4.指向指针的指针
    int  var3;
    int* ptr3;
    int** pptr3;
    var3 = 3000;
    // 获取 var 的地址
    ptr3 = &var3;
    // 使用运算符 & 获取 ptr 的地址
    pptr3 = &ptr3;
    // 使用 pptr 获取值
    cout << "Value of var3 :" << var << endl;
    cout << "Value available at *ptr3 :" << *ptr3 << endl;
    cout << "Value available at **pptr3 :" << **pptr3 << endl;


    //5.引用
    //引用是变量的另一个标签
     // 声明简单的变量
    int    i;
    double d;
    // 声明引用变量
    int& r = i;
    double& s = d;
    i = 5;
    cout << "Value of i : " << i << endl;
    cout << "Value of i reference : " << r << endl;
    d = 11.7;
    cout << "Value of d : " << d << endl;
    cout << "Value of d reference : " << s << endl;
    return 0;
}