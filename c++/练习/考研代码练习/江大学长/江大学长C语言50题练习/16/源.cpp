/*
��S=1+3+5+......+n
*/

/*
����˼�룺
��һ��������һ�����ͱ�����sum����������ͣ�����һ�����ͱ�����n�����������û������nֵ
�ڶ�������forѭ�������+2������ֱ���ӵ�n��ʱ�����ѭ��
�����������sum��ֵ
*/

#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	int n;
	cout << "������n��ֵ��";
	cin >> n;
	for (int i = 1; i <= n; i = i + 2)
	{
		sum = sum + i;
	}
	cout << "sum��ֵΪ��" << sum;
	return 0;
}