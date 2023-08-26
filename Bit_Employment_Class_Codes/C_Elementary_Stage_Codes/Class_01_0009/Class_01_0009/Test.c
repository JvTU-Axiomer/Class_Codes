#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void bubble_sort(int arr[10], int sz)   //参数接收数组元素个数
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;   //在每一趟冒泡排序开始之前，总认为待排序的数组是已经有序的.
		int j = 0;
		//在一趟冒泡排序中相互比较的对数：
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换两个元素：
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;

				//设置flag表示此趟排序中数组不是已经有序的.
				flag = 0;
			}
		}

		if (flag == 1)
		{
			//数组已经提前排好序.
			break;
		}
	}
}

int main()
{
	int arr[10] = { 0 };
	//输入数据：
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}
	//冒泡排序 -- 升序：
	bubble_sort(arr, sz);	//数组传参，实质上传递的是数组首元素的地址.

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}