#define _CRT_SECURE_NO_WARNINGS 1
#include <stddef.h>
#include <stdio.h>
#define MAX_SIZE 1010

int main() {
	int n = 0;
	int m = 0;
	int arr_1[MAX_SIZE] = { 0 };
	int arr_2[MAX_SIZE] = { 0 };

	int i = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &arr_1[i]);
	}
	for (i = 0; i < m; i++) {
		scanf("%d", &arr_2[i]);
	}

	int pn = 0;
	int pm = 0;
	while (pn < n && pm < m) {
		if (arr_1[pn] < arr_2[pm]) {
			printf("%d ", arr_1[pn]);
			pn++;
		}
		else {
			printf("%d ", arr_2[pm]);
			pm++;
		}
	}

	if (pn == n)
	{
		for (i = pm; i < m; i++)
		{
			printf("%d ", arr_2[i]);
		}
	}
	else
	{
		for (i = pn; i < n; i++)
		{
			printf("%d ", arr_1[i]);
		}
	}

	return 0;
}