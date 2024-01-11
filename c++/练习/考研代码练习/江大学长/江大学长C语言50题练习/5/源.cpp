/*
判断是否为闰年
*/

/*
核心思想：
第一步：用一个整型变量接收用户输入的年份
第二步：用if语句判断是否为闰年，并输出提示信息
*/

#include<iostream>
using namespace std;
int main()
{
	int year;
	cout << "请输入要判断的年份：";
    cin >> year;
	if ((year % 4 == 0) && (year % 100) != 0)
	{
		cout << "该年份为闰年";
	}
	else if (year % 400 == 0)
	{
		cout << "该年份为闰年";
	}
	else if ((year % 3200 == 0) && (year % 172800))
	{
		cout << "该年份为闰年";
	}
	else cout << "该年份不是闰年";
	return 0;
}