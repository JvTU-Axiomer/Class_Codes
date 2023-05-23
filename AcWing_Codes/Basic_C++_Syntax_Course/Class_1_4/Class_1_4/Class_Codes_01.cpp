#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
const int N = 3010;
int main()
{
	int a[N] = { 1 };
	int n = 0;
	cin >> n;

	int m = 1;	//位数.
	for (int i = 0; i < n; i++)
	{
		int t = 0;	//进位.
		for (int j = 0; j < m; j++)
		{
			t += a[j] * 2;
			a[j] = t % 10;
			t = t / 10;
		}
		if (t)
		{
			//有进位情况.
			a[m++] = 1;
		}
	}
	for (int i = m - 1; i >= 0; i--)
	{
		cout << a[i];
	}
	cout << endl;

	cout << (int)pow(2, n) << endl;
	return 0;
}