/*
求两数的最大公约数
*/

/*
核心思想：
第一步：定义两个int变量用来接收用户输入的两个整数
第二步：判断两数中较小的数并用变量min保存
第三步：用for语句从min开始逐步减1遍历，直到找到最大公约数为止
第四步：输出最大公约数
*/

#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "请输入第一个数：";
	cin >> a;
	cout << "请输入第二个数：";
	cin >> b;
	int min = a;
	if (a > b)
	{
		min = b;
	}
	for (int i = min; i >= 1; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			cout << "这两个数的最大公约数为"<<i;
			break;
		}
	}
	return 0;
}