/*
判断一个数是否可为两素数之和
*/

/*
核心思想：
第一步：定义一个判断传入参数是否为素数的函数，是素数返回1，不是素数返回0
第二步：定义一个int变量用来接收用户输入的整数
第三步：用for循环从1逐步加1开始遍历，如果当前数为素数并且要判断的数减去当前数也为素数，则输出当前数与（要判断的数减去当前数的值）
*/

#include<iostream>
using namespace std;
int su_shu(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{

			return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	cout << "请输入一个整数：";
	cin >> n;
	for (int i = 2;i<n-2; i++)
	{
		if (su_shu(i))
		{
			int m = n - i;
			if (su_shu(m))
			{
				cout << "该数可为两素数之和！" << endl << "两数分别为：" << i << "  " << m;
				break;
			}
		}
		else continue;
	}
	return 0;
}