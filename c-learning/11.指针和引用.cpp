#include <iostream>

using namespace std;

int main()
{
    //1.ָ��
    int  var = 20;   // ʵ�ʱ���������
    int* ip;        // ָ�����������
    ip = &var;       // ��ָ������д洢 var �ĵ�ַ
    cout << "Value of var variable: ";
    cout << var << endl;
    // �����ָ������д洢�ĵ�ַ
    cout << "Address stored in ip variable: ";
    cout << ip << endl;
    // ����ָ���е�ַ��ֵ
    cout << "Value of *ip variable: ";
    cout << *ip << endl;

    //2.NULLָ��
    int* ptr1 = NULL; //��ַΪ�ڴ�ĳ���ַ000000
    cout << "ptr1��ֵ�ǣ�" << ptr1 << endl;

    //3.ָ������
    int  var2[3] = { 10, 100, 200 };
    int* ptr2[3];
    for (int j = 0; j < 3; j++)
    {
        ptr2[j] = &var2[j]; // ��ֵΪ�����ĵ�ַ
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Value of var2[" << i << "] = ";
        cout << *ptr2[i] << endl;
    }

    //4.ָ��ָ���ָ��
    int  var3;
    int* ptr3;
    int** pptr3;
    var3 = 3000;
    // ��ȡ var �ĵ�ַ
    ptr3 = &var3;
    // ʹ������� & ��ȡ ptr �ĵ�ַ
    pptr3 = &ptr3;
    // ʹ�� pptr ��ȡֵ
    cout << "Value of var3 :" << var << endl;
    cout << "Value available at *ptr3 :" << *ptr3 << endl;
    cout << "Value available at **pptr3 :" << **pptr3 << endl;


    //5.����
    //�����Ǳ�������һ����ǩ
     // �����򵥵ı���
    int    i;
    double d;
    // �������ñ���
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