/*
��1*1+2*2+i*i+n*n<1000��n�����ֵ��
*/

/*
����˼�룺
��һ������forѭ����1��ʼ+1��������һ�����ͱ������ռ���ĺͣ�ֱ����>=1000��ʱ��ֹͣѭ���������ʱ��n
*/

#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	int n;
	for (n = 1; sum < 1000; n++)
	{
		sum = sum + n * n;
		if (sum > 1000)
		{
			sum = sum - n * n;
			n=n - 1;
			
			break;

		}
	}
	cout << "n=" << n<<endl<<"sum="<<sum;
	return 0;
}