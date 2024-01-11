/*
求S=1+3+5+......+n
*/

/*
核心思想：
第一步：定义一个整型变量（sum）用来计算和，定义一个整型变量（n）用来接收用户输入的n值
第二步：用for循环语句逐步+2遍历，直到加到n的时候结束循环
第三步：输出sum的值
*/

#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	int n;
	cout << "请输入n的值：";
	cin >> n;
	for (int i = 1; i <= n; i = i + 2)
	{
		sum = sum + i;
	}
	cout << "sum的值为：" << sum;
	return 0;
}