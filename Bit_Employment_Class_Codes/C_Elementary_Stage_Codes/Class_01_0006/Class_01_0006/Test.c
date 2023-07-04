#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	//计算.
	int k = (m > n ? m : n);
	while (1)
	{
		if (m % k == 0 && n % k == 0)
		{
			break;
		}
		k--;
	}
	printf("%d和%d的最大公约数为：%d\n", m, n, k);
	return 0;
}