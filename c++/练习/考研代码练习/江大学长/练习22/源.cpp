/*
输出一个菱形图
   *
  * *
 *   *
  * *
   *
*/
#include<iostream>
using namespace std;
int main()
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 1; j < 6; j++)
		{
			if (j == (3 - i) || j == (3 + i))
				cout << '*';
			else
				cout << ' ';
		}
		cout << endl;
	}
	for (i = 1; i>=0; i--)
	{
		for (j = 1; j < 6; j++)
		{
			if (j == (3 - i) || j == (3 + i))
				cout << '*';
			else
				cout << ' ';
		}
		cout << endl;
	}
	return 0;
}