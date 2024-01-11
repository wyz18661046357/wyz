/*
计算圆的面积和周长
*/

/*
核心思想：
第一步：用一个double变量接收用户输入的半径
第二步：计算圆的面积和周长并输出
*/

#include<iostream>
using namespace std;
int main()
{
	double r;
	cout << "请输入圆的半径：";
	cin >> r;
	double s= 3.141592653 * r * r;
	double c = 3.141592653 * r * 2;
	cout << "圆的面积为" << s<<endl;
	cout << "圆的周长为" << c;
	return 0;
}