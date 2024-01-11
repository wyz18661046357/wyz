/*
输入一个数组，输出数组倒序的结果
*/
#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int aa=0;
	for (int i = 0; i < 100; i++)
	{
		cin >> a[i];
		if (cin.get() == '\n')
		{
			aa = i;
			break;
		}
	}
	for (int i = aa; i >= 0; i--)
	{
		cout << a[i] << ' ';
	}
	return 0;
}