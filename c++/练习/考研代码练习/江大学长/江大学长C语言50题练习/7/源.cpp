/*
���ĸ��������ҳ���С����
*/

/*
����˼�룺
��һ�������ĸ����ͱ��������û�������ĸ�����
�ڶ�������min�����ҳ����ĸ�������С���������
*/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a, b, c, d;
	cout << "�������һ��������";
	cin >> a;
	cout << "������ڶ���������";
	cin >> b;
	cout << "�����������������";
	cin >> c;
	cout << "��������ĸ�������";
	cin >> d;
	cout <<"���ĸ����е���С��Ϊ" << min(min(min(a, b), c), d);
	return 0;
}