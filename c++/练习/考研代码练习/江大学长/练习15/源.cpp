/*
写两个函数，分别求两个整数的最大公约数和最小公倍数，用主函数调用这两个函数，并输出结果。
两个整数由键盘输入。
*/
#include<iostream>
using namespace std;
int gys(int a,int b)
{
	int gys=0;
	int max;
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	for (int i = max; gys == 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			gys = i;
		}
	}
	return gys;
}
int gbs(int a,int b)
{
	int gbs=0;
	int min;
	if (a > b)
	{
		min = b;
	}
	else
	{
		min = a;
	}
	for (int i = min; gbs == 0; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			gbs = i;
		}
	}
	return gbs;
}
int main()
{
	int a, b;
	cout << "请输入第一个数：";
	cin >> a;
	cout << "请输入第二个数：";
	cin >> b;
	cout << "这两个数的最大公约数为：" << gys(a, b)<<endl;
	cout << "这两个数的最小公倍数为：" << gbs(a, b) << endl;
	return 0;
}