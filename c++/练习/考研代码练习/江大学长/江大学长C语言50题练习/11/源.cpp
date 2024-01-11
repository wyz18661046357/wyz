/*
判断一个数字为几位数
*/

/*
核心思想：
第一步：用一个int变量接收用户输入的数字
第二步：定义一个int变量并初始化为0，用来记录数字的位数。
第三步：用for循环来判断位数，每次循环该数除10，直至变为0循环停止
第四步：输出数字的位数
*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "请输入一个整数：";
	cin >> n;
	for (int i = 1, m = n; m != 0; i++)
	{
		m = m / 10;
		if (m == 0)
		{
			cout << "该数为" << i << "位数";
			break;
		}
	}
	return 0;
}