#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <iostream>
using namespace std;

int main()
{
	int a = 6;
	int b = a++;	//7
	int c = ++a;	//8
	cout << a << ' ' << a++ << endl;//先赋值再自增	9 8
	cout << a << ' ' << ++a << endl;//先自增再赋值	10 10
	printf("%d\n", a++);	//10
	printf("%d\n", ++a);	//12
	printf("%d %d\n", a, a++);	//13 12
	printf("%d %d\n", a, ++a);	//14 14
	printf("%d %d\n", a++, a);	//14 15
	printf("%d %d\n", ++a, a);	//16 16

	return 0;
}