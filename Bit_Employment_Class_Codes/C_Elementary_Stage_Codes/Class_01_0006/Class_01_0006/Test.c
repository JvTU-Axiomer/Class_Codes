#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i += 2)
	{
		//判断i是否为素数：
		int j = 0;
		int flag = 1;	//假设i是素数.
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);

	return 0;
}