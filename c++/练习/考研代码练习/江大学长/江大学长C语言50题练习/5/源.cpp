/*
�ж��Ƿ�Ϊ����
*/

/*
����˼�룺
��һ������һ�����ͱ��������û���������
�ڶ�������if����ж��Ƿ�Ϊ���꣬�������ʾ��Ϣ
*/

#include<iostream>
using namespace std;
int main()
{
	int year;
	cout << "������Ҫ�жϵ���ݣ�";
    cin >> year;
	if ((year % 4 == 0) && (year % 100) != 0)
	{
		cout << "�����Ϊ����";
	}
	else if (year % 400 == 0)
	{
		cout << "�����Ϊ����";
	}
	else if ((year % 3200 == 0) && (year % 172800))
	{
		cout << "�����Ϊ����";
	}
	else cout << "����ݲ�������";
	return 0;
}