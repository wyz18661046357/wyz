/*
输入一个字符串，将其中的大写变小写，小写变大写
*/
#include<iostream>
using namespace std;
int main()
{
	string a;
	cin >> a;
	int n = a.length();
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			a[i] = a[i] + 32;
			cout << a[i] << ' ';
		}
		else if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
			cout << a[i] << ' ';
		}
	}
	return 0;
}