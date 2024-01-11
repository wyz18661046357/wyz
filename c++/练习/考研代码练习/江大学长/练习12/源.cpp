/*
输入一个字符串，将字符串中
（1）字母a用*代替
（2）将字母a去掉
*/


//（1）字母a用*代替
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







//（2）将字母a去掉
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
