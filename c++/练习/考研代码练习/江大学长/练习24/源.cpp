/*
写一个函数，输入一行字符，将此字符串中最长的单词输出
*/
#include<iostream>
#include<string>
using namespace std;
void zui(string a)
{
	int n = a.length();
	int i = 0,ii=0,da=0,d=0;
	for (int nn = 0; nn < n;nn++ )
	{
		if (a[nn] == ' ')
		{
			continue;
		}
		else if (nn == 0 || a[nn - 1] == ' ')
		{
			ii = 0;
			for (int j = 0; a[nn + j] != ' ' && a[nn + j] != '\0'; j++)
			{
				ii++;
			}
			if (da < ii)
			{
				da = ii;
				d = nn;

			}
		}
	}
	for (int i = 0; i < da; i++)
	{
		cout << a[d + i];
	}
}
int main()
{
	string a;
	getline(cin,a);
	zui(a);
	return 0;
}