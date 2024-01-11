/*
给你一组整数，用户可以进行q次查询，每次查询用户输入数组的起始下标和结束下标，要求你输出数组在这个范围内的区间和。
*/
#include<iostream>
using namespace std;
int main()
{
	int q;
	int a[100];
	int aa;
	int sum=0;
	cout << "请输入数组：";
	for (int i = 0; i < 100; i++)
	{
		cin >> a[i];
		if (cin.get() == '\n')
		{
			aa = i;
			break;
		}
	}
	cout << "请输入可查询次数：";
	cin >> q;

	for (int n = 1; n <= q; n++)
	{
		sum = 0;
	cout << "请输入起始下标：";
	int qs;
	cin >> qs;
	cout << "请输入结束下标：";
	int js;
	cin >> js;
	for (int i = qs; i <= js; i++)
	{
		sum = sum + a[i];
	}
	cout << "和为：" << sum<<endl;
	}

	return 0;
}