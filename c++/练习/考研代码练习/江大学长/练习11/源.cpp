/*
����һ���ַ������ж��Ƿ�Ϊ���Ĵ������Ĵ�����ǰ��������Ӻ���ǰ���Ϊͬ���Ľ����
*/
#include<iostream>
using namespace std;
int main()
{
	string a;
	cin >> a;
	int n = a.length();
	for (int i = 0,m=n-1; i < n; i++)
	{
		if (a[i] != a[m])
		{
			cout << "���ǻ��Ĵ���";
			break;
		}
		else
		{
			if (m == 0)
			{
				cout << "�ǻ��Ĵ���";
			}
			m--;

		}
	}
	return 0;
}