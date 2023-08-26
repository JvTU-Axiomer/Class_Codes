#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = "Hello BIT!";
	memset(arr, 'x', 5);
	printf("arr 的内容为：%s\n", arr);

	return 0;
}