#define _CRT_SECURE_NO_WARNINGS 1
#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[31];
	scanf("%s", str);

	char c;
	//手动过滤掉缓冲区中的回车符.
	scanf("\n%c", &c);

	for (int i = 0; str[i]; i++)
	{
		if (str[i] == c)
		{
			str[i] = '#';
		}
	}
	return 0;
}