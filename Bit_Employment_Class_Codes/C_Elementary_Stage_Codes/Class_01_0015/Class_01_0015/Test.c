#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Is_Pow_2(int num)
{
	return num & (num - 1);
}

int main()
{
	int num = 0;
	scanf("%d", &num);

	if (Is_Pow_2(num) == 0)
		printf("%d 是2的幂次方！\n", num);
	else
		printf("%d 不是2的幂次方！\n", num);

	return 0;
}