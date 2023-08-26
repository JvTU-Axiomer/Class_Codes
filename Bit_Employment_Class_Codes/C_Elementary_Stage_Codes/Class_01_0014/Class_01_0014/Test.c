#include <stdio.h>
#include <string.h>
void reverse(char* arr, int len)
{
	char* left = arr;
	char* right = arr + len - 1;
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;

		left++;
		right--;
	}
}

int main() {
	char arr[10010] = { 0 };
	gets(arr);

	int len = strlen(arr);
	reverse(arr, len);

	printf("%s\n", arr);

	return 0;
}