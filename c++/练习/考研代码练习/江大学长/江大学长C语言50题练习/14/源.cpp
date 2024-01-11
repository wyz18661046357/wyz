/*
输入一组数，计算其中奇数的平均值和偶数的乘积
*/

/*
核心思想：
第一步：定义一个整型变量用于存放用户当前输入的数，用for循环语句保证用户能持续输入，直到用户输入0为止
第二步：在输入数据之后判断该数是奇数还是偶数
第三步：定义一个double变量（Ping_Jun）与三个整型变量（add、s、num）,num用来计算奇数的个数，add用来计算所有奇数之和，Ping_Jun计算奇数的平均数，s用来计算偶数的乘积
第四步：输出Ping_Jun、s的值
*/

#include<iostream>
using namespace std;
int main()
{
	int n,add=0,s=1,num=0;
	double Ping_Jun;
	cin >> n;
	for (; n != 0; )
	{
		if (n % 2 == 0)
		{
			s = s * n;
		}
		else
		{
			num++;
			add = add + n;
		}
		cin >> n;
	}
	Ping_Jun = (double)add / (double)num;
	cout << "奇数的平均值为：" << Ping_Jun << endl << "偶数的乘积为：" << s;
	return 0;
}