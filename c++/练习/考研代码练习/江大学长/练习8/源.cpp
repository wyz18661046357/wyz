/*
����һ���������û����Խ���q�β�ѯ��ÿ�β�ѯ�û������������ʼ�±�ͽ����±꣬Ҫ������������������Χ�ڵ�����͡�
*/
#include<iostream>
using namespace std;
int main()
{
	int q;
	int a[100];
	int aa;
	int sum=0;
	cout << "���������飺";
	for (int i = 0; i < 100; i++)
	{
		cin >> a[i];
		if (cin.get() == '\n')
		{
			aa = i;
			break;
		}
	}
	cout << "������ɲ�ѯ������";
	cin >> q;

	for (int n = 1; n <= q; n++)
	{
		sum = 0;
	cout << "��������ʼ�±꣺";
	int qs;
	cin >> qs;
	cout << "����������±꣺";
	int js;
	cin >> js;
	for (int i = qs; i <= js; i++)
	{
		sum = sum + a[i];
	}
	cout << "��Ϊ��" << sum<<endl;
	}

	return 0;
}