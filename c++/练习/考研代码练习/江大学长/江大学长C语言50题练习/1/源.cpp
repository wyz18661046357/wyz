/*
成绩转换（整型转换 转换成A、B、C、D、E）
*/

/*
核心思想：
第一步：用一个整型变量接收用户输入的整型成绩
第二步：用Switch来判断用户输入的整型成绩所对应的字母成绩并输出字母成绩
*/

#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "请输入成绩：";
	cin >> a;
	switch (a / 10)
	{
	case 10:
	case 9:cout << "A"; break;
	case 8:cout << "B"; break;
	case 7:cout << "C"; break;
	case 6:cout << "D"; break;
	default:cout << "E"; break;
	}
	return 0;
}