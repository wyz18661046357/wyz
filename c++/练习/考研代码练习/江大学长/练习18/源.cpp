#include<iostream>
using namespace std;

double jia(double a, double b)
{
	double jia;
	jia = a + b;
	return jia;
}
double jian(double a, double b)
{
	double jian;
	jian = a - b;
	return jian;
}
double cheng(double a, double b)
{
	double cheng;
	cheng = a * b;
	return cheng;
}
double chu(double a, double b)
{
	double chu;
	chu = a / b;
	return chu;
}

int main()
{
	double a, b;
	char c;
	cout << "请输入你要计算的式子：";
	cin >> a >> c >> b;
	if (c == '+')
	{
		cout << "计算结果为："<<jia(a,b);
	}
	else if (c == '-')
	{
		cout << "计算结果为：" << jian(a, b);
	}
	else if (c == '*')
	{
		cout << "计算结果为：" << cheng(a, b);
	}
	else
	{
		cout << "计算结果为：" << chu(a, b);
	}
	return 0;
}