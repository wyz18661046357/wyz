/*
�ҳ�һ����ά�����еİ��㣬����λ���ϵ�Ԫ���ڸ���������ڸ�������С��Ҳ����û�а��㡣
*/
#include<iostream>
using namespace std;
int main()
{
	int a[5][5] = { 1,2,3,4,5,
				    2,3,4,5,6,
				    3,4,5,6,3,
				    0,0,0,0,1,
				    5,6,7,8,9 };
	int max, min,h,l,hh,ll,d=0;
	for (int i = 0; i < 5; i++)
	{			
		max = a[i][0];h = i; l = 0;
		for (int j = 0; j < 5; j++)
		{

			if (max < a[i][j])
			{
				max = a[i][j]; h = i; l = j;
			}
		}			
		min = a[0][l];hh = 0; ll = l;
		for (int n = 0; n < 5; n++)
		{

			if (min> a[n][l])
			{
				min = a[n][l];
				hh = n; ll = l;
			}

		}
		if (h == hh && l == ll)
		{
			cout << "����Ϊ��" << h + 1 << "�е�" << l + 1 << "�е�" << max << "��";
			d = 1;
		}
	}
	if (d==0)
	{
		cout << "û�а���";
	}
	return 0;
}