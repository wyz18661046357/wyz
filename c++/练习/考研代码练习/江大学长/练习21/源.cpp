/*
��һ����ά�����к��е�Ԫ�ػ������浽��һ����ά�����С����������Ϳ��������ͻ��߸����ͣ�
*/
#include<iostream>
using namespace std;
int main()
{
	int i;
	int j;
	double n1[5][5]={1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5}, n2[5][5];
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			n2[i][j] = n1[j][i];
			cout << n2[i][j]<<" ";
		}
		cout << endl;
	}
	return 0;
}