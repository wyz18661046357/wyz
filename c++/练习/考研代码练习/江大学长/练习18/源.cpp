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
	cout << "��������Ҫ�����ʽ�ӣ�";
	cin >> a >> c >> b;
	if (c == '+')
	{
		cout << "������Ϊ��"<<jia(a,b);
	}
	else if (c == '-')
	{
		cout << "������Ϊ��" << jian(a, b);
	}
	else if (c == '*')
	{
		cout << "������Ϊ��" << cheng(a, b);
	}
	else
	{
		cout << "������Ϊ��" << chu(a, b);
	}
	return 0;
}