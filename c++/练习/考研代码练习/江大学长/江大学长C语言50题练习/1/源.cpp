/*
�ɼ�ת��������ת�� ת����A��B��C��D��E��
*/

/*
����˼�룺
��һ������һ�����ͱ��������û���������ͳɼ�
�ڶ�������Switch���ж��û���������ͳɼ�����Ӧ����ĸ�ɼ��������ĸ�ɼ�
*/

#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "������ɼ���";
	cin >> a;
	switch (a / 10)
	{
	case 10:
	case 9:cout << "A"; break;
	case 8:cout << "B"; break;
	case 7:cout << "C"; break;
	case 6:cout << "D"; break;
	default:cout << "E"; break;
	}
	return 0;
}