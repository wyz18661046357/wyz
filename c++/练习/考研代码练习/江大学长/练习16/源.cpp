/*
дһ���������ɼ�������һ������������Ƿ�Ϊ������
*/
#include<iostream>
using namespace std;
bool aaa(int n)
{
	bool d;
		if (n == 1)
		{
			d = true;
			return d;
		}
	for (int i = 2; i < n; i++)
	{

		if (n % i == 0)
		{
			d = false;
			return d;
		}
		else
		{
			d = true;
		}
	}
	return d;
}
int main()
{
	int n;
	cout << "������һ������";
	cin >> n;
	if (aaa(n) == true)
	{
		cout << "������������";
	}
	else
	{
		cout << "��������������";
	}
	return 0;
}