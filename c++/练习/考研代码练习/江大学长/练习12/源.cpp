/*
����һ���ַ��������ַ�����
��1����ĸa��*����
��2������ĸaȥ��
*/


//��1����ĸa��*����
/*
#include<iostream>
using namespace std;
int main()
{
	string a;
	cin >> a;
	int n = a.length();
	for (int i=0; i < n; i++)
	{
		if (a[i] == 'a')
		{
			a[i] = '*';
		}
		cout << a[i]<<' ';
	}
	return 0;
}
*/







//��2������ĸaȥ��
#include<iostream>
using namespace std;
int main()
{
	string a;
	cin >> a;
	int n = a.length();
	for (int i=0; i < n; i++)
	{
		if (a[i] == 'a')
		{
			for (int m = i; m < n; m++)
			{
				a[m] = a[m + 1];
			}
		}
		cout << a[i]<<' ';
	}
	return 0;
}
