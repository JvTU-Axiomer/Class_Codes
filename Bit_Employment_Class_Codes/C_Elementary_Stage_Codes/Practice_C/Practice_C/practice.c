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
	printf("����������Ĵ�С��>\n");
	scanf("%d", &len);
	printf("�����������Ԫ�أ�ÿ����Ԫ��֮���ÿո�ָ���>\n");
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("����������Ҫ��ѯ�����ݣ�>\n");
	int key = 0;
	scanf("%d", &key);
	int index = bin(arr, len, key);
	if (index == -1)
	{
		printf("����Ҫ��ѯ�����ݲ��ڸ������У�\n");
	}
	else
	{
		printf("����Ҫ��ѯ�������ڸ������е��±�Ϊ��%d��\n", index);
	}
	return 0;
}