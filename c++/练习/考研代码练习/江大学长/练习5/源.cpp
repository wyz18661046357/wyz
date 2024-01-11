/*
Çó1£¡+2£¡+3£¡+4£¡+......+20£¡
*/
#include<iostream>
using namespace std;
int main()
{
	double num=0;

	for (int i = 1; i <= 20; i++)
	{
	double s=1;
		for (int n = 1; n <= i; n++)
		{

			s = s * n;
		}
		num = num + s;
	}
	cout << num;
	return 0;
}