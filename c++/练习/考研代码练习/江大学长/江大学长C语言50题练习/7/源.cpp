/*
从四个整数中找出最小的数
*/

/*
核心思想：
第一步：用四个整型变量接收用户输入的四个整数
第二步：用min函数找出这四个数中最小的数并输出
*/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a, b, c, d;
	cout << "请输入第一个整数：";
	cin >> a;
	cout << "请输入第二个整数：";
	cin >> b;
	cout << "请输入第三个整数：";
	cin >> c;
	cout << "请输入第四个整数：";
	cin >> d;
	cout <<"这四个数中的最小数为" << min(min(min(a, b), c), d);
	return 0;
}