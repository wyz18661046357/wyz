/*
输入一个字符串，判断是否为回文串（回文串：从前向后输出与从后向前输出为同样的结果）
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
			cout << "不是回文串！";
			break;
		}
		else
		{
			if (m == 0)
			{
				cout << "是回文串！";
			}
			m--;

		}
	}
	return 0;
}