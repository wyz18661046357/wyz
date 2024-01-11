/*
给你一组整数，计算里面有多少不同的数字。
*/
#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int aa=0,num=0;
	for (int i = 0; i < 100; i++)
	{
		cin >> a[i];
		if (cin.get() == '\n')
		{
			aa = i;
			break;
		}


	}
	
	for (int i = 1; i <= aa; i++)
	{
		for (int n = 0; n < i; n++)
		{
			if (a[i] == a[n])
				num++;
		}
	}
	int mm = (aa + 1) - num;
	cout << mm;
	return 0;
}