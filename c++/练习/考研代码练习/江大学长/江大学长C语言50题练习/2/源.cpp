/*
求两个整数的平方和并输出
*/

/*
核心思想：
第一步：用两个整型变量接收用户输入的两个整数
第二步：计算这两个整数的平方和并输出
*/

#include<iostream>
using namespace std;
int main()
{
	int a, b, s;
	cout << "请输入第一个整数：";
	cin >> a;
	cout << "请输入第二个整数：";
	cin >> b;
	s = a * a + b * b;
	cout << "这两个整数的平方和=" << s;
	return 0;
}