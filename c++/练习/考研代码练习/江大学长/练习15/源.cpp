/*
д�����������ֱ����������������Լ������С������������������������������������������
���������ɼ������롣
*/
#include<iostream>
using namespace std;
int gys(int a,int b)
{
	int gys=0;
	int max;
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	for (int i = max; gys == 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			gys = i;
		}
	}
	return gys;
}
int gbs(int a,int b)
{
	int gbs=0;
	int min;
	if (a > b)
	{
		min = b;
	}
	else
	{
		min = a;
	}
	for (int i = min; gbs == 0; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			gbs = i;
		}
	}
	return gbs;
}
int main()
{
	int a, b;
	cout << "�������һ������";
	cin >> a;
	cout << "������ڶ�������";
	cin >> b;
	cout << "�������������Լ��Ϊ��" << gys(a, b)<<endl;
	cout << "������������С������Ϊ��" << gbs(a, b) << endl;
	return 0;
}