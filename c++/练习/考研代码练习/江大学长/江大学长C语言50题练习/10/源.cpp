/*
�����������Լ��
*/

/*
����˼�룺
��һ������������int�������������û��������������
�ڶ������ж������н�С�������ñ���min����
����������for����min��ʼ�𲽼�1������ֱ���ҵ����Լ��Ϊֹ
���Ĳ���������Լ��
*/

#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "�������һ������";
	cin >> a;
	cout << "������ڶ�������";
	cin >> b;
	int min = a;
	if (a > b)
	{
		min = b;
	}
	for (int i = min; i >= 1; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			cout << "�������������Լ��Ϊ"<<i;
			break;
		}
	}
	return 0;
}