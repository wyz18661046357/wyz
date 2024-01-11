/*
用冒泡法对一组用户输入的整数进行排序
*/
#include<iostream>
using namespace std;
int main()
{
	int i, j;
	int a[100];
	int n;
	for (n = 0; n < 100; n++)
	{
		cin >> a[n];
		if (cin.get() == '\n')
		{
			
			break;
		}
	}
	n =n+1;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i-1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int nn = a[j];
				a[j] = a[j + 1];
				a[j + 1] = nn;
			}
		}
	}
	for (int m = 0; m < n; m++)
	{
		cout << a[m] << ' ';
	}
	return 0;
}