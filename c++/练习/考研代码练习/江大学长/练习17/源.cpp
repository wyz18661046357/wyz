/*
дһ���������������һ���ַ����������š��������������������ַ�����
*/
#include<iostream>
#include<string>
using namespace std;
string aa(string b)
{
	string m=b;
	int n = b.length();
	int nn = n - 1;
	for (int i = 0; i < n; i++)
	{
		m[i] = b[nn];
		nn--;
    }
	return  m;
}
int main()
{
	string a;
	cin >> a;
	cout<<aa(a);
	return 0;
}