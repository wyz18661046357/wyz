/*
ʵ�ֺ���
y=2x+1(x<0)
y=0(x=0)
y=2x-1(x>0)
*/

/*
����˼�룺
��һ������һ�����ͱ��������û������x
�ڶ�������if����ж�y��ֵ
*/

#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout << "������x��ֵ��";
	cin >> x;
	if (x < 0)
	{
		y = 2 * x + 1;
	}
	else if (x == 0)
	{
		y = 0;
	}
	else if (x > 0)
	{
		y = 2 * x - 1;
	}
	cout << "y��ֵΪ��" << y;
	return 0;
}