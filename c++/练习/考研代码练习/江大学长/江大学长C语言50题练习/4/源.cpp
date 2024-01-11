/*
实现函数
y=2x+1(x<0)
y=0(x=0)
y=2x-1(x>0)
*/

/*
核心思想：
第一步：用一个整型变量接收用户输入的x
第二步：用if语句判断y的值
*/

#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout << "请输入x的值：";
	cin >> x;
	if (x < 0)
	{
		y = 2 * x + 1;
	}
	else if (x == 0)
	{
		y = 0;
	}
	else if (x > 0)
	{
		y = 2 * x - 1;
	}
	cout << "y的值为：" << y;
	return 0;
}