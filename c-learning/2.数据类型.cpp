#include <iostream>
using namespace std;

int main()
{
	cout << "Size of char : " << sizeof(char) << endl;
	cout << "Size of int : " << sizeof(int) << endl;
	cout << "Size of short int : " << sizeof(short int) << endl;
	cout << "Size of long int : " << sizeof(long int) << endl;
	cout << "Size of float : " << sizeof(float) << endl;
	cout << "Size of double : " << sizeof(double) << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
	//typedef����
	typedef int feet;
	feet a = 10;
	cout << a << endl;

	//1.ö������
	enum color {red,green=6,blue} c; //Ĭ��red=0,blue=2
	c = green;
	cout << c << endl;


	return 0;


}


