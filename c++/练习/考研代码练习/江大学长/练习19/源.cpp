/*
��̲����һ�����ӣ���ֻ�������֡���һֻ���Ӱ��������ƽ����Ϊ��ݣ�����һ������ֻ�����ְѶ��һ�����뺣�У�������һ�ݡ�
�ڶ�ֻ���Ӱ�ʣ�µ�������ƽ���ֳ���ݣ��ֶ�һ������ͬ���Ѷ��һ�����뺣�У�������һ�ݣ�
���������ġ�����ֻ���Ӷ����������ģ��ʺ�̲��ԭ�������ж��ٸ����ӣ�
*/

#include<iostream>
using namespace std;

int main()
{
	int n = 5;
	int sum;
	int i=1,ii = 1;
	int nnn;
	while(1)
	{
		sum = 0;
		int b = ii;
		for (i=1; i <=6; )
		{
			if (i ==1)
			{
				sum = ii * 4;
				i++;
			}
			else
			{
			if (sum % 4 != 0)
				break;
			else
			{
				sum = (sum/4)*5+1;
				i++;
			}
			}
		}
		if (i == 7)
			break;
		ii++;
	}
	cout << sum<<' '<<i;
	return 0;
}
