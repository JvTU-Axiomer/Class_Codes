#define _CRT_SECURE_NO_WARNINGS 1
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	//利用fgets()函数进行读入：
	char arr[10];
	fgets(arr, 8, stdin);
	cout << arr << endl;

	//清空缓冲区中的回车符号：
	getchar();

	//利用getline()函数进行读入：
	string str;
	getline(cin, str);
	cout << str << endl;

	return 0;
}