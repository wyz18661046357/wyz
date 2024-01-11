/*
写一个函数，由键盘输入一个数，输出其是否为素数。
*/
#include<iostream>
using namespace std;
bool aaa(int n)
{
	bool d;
		if (n == 1)
		{
			d = true;
			return d;
		}
	for (int i = 2; i < n; i++)
	{

		if (n % i == 0)
		{
			d = false;
			return d;
		}
		else
		{
			d = true;
		}
	}
	return d;
}
int main()
{
	int n;
	cout << "请输入一个数：";
	cin >> n;
	if (aaa(n) == true)
	{
		cout << "该数是素数！";
	}
	else
	{
		cout << "该数不是素数！";
	}
	return 0;
}