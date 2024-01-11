/*
两个乒乓球队进行比赛,各出 3 人。甲队为 A,B,C 3 人,乙队为 X,Y,Z 3 人。已抽签决定比赛名单。
有人向队员打听比赛的名单,A 说他不和 X 比,C 说他不和 X,Z 比,请编程序找出 3 对赛手的名单。
*/
#include<iostream>
using namespace std;
int main()
{
	char i, a, b;
	for (a = 'a'; a <= 'c'; a++)
	{
		for (b = 'x'; b <= 'z'; b++)
		{
			if (a == 'a' && b == 'x')
			{
				break;
			}
			else
			{
				for (i = 'x'; i <= 'z'; i++)
				{
					if ((a == 'c') && (i == 'x' || i == 'z'))
					{
						break;
					}
					else
					{
						cout << a << b << i;
					}
				}
			}
		}
	}
	return 0;
}