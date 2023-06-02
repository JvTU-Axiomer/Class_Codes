#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAX 1000
int bin(int arr[], int len, int key)
{
	int l, r, m;
	l = 0;
	r = len - 1;
	m = 0;
	while (l <= r)
	{
		m = (l + r) / 2;
		if (key == arr[m])
		{
			return m;
		}
		else if (key < arr[m])
		{
			r = m - 1;
		}
		else
		{
			l = m + 1;
		}
	}
	return -1;
}
int main()
{
	int arr[MAX] = { 0 };
	int len = 0;
	printf("请输入数组的大小：>\n");
	scanf("%d", &len);
	printf("请输入数组的元素，每两个元素之间用空格分隔：>\n");
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("请输入您想要查询的数据：>\n");
	int key = 0;
	scanf("%d", &key);
	int index = bin(arr, len, key);
	if (index == -1)
	{
		printf("您所要查询的数据不在该数组中！\n");
	}
	else
	{
		printf("您所要查询的数据在该数组中的下标为：%d！\n", index);
	}
	return 0;
}