/*
Ҫ��ͳ���û�������ַ����еıʻ���Ŀ�ͣ���ĸA-G��a-g����
*/
#include<iostream>
using namespace std;
int main()
{
	int dx[7] = { 3,2,1,2,4,3,2 };
	int xx[7] = { 1,1,1,1,1,2,1 };
	char aa[100];
	int aaa,sum=0;
	for (int i = 0; i < 100; i++)
	{
		cin >> aa[i];
		if (cin.get() == '\n')
		{
			aaa = i;
			break;
		}

	}
	for (int i = 0; i <= aaa; i++)
	{
		if (aa[i] >= 'A' && aa[i] <= 'G')
		{
			sum = sum + dx[aa[i] - 'A'];
		}
		else if (aa[i] >= 'a' && aa[i] <= 'g')
		{
			sum = sum + xx[aa[i]- 'a'];
		}
	}
	cout << sum;
	return 0;
}