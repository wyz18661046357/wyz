/*
����һ��������������������ƽ��ֵ��ż���ĳ˻�
*/

/*
����˼�룺
��һ��������һ�����ͱ������ڴ���û���ǰ�����������forѭ����䱣֤�û��ܳ������룬ֱ���û�����0Ϊֹ
�ڶ���������������֮���жϸ�������������ż��
������������һ��double������Ping_Jun�����������ͱ�����add��s��num��,num�������������ĸ�����add����������������֮�ͣ�Ping_Jun����������ƽ������s��������ż���ĳ˻�
���Ĳ������Ping_Jun��s��ֵ
*/

#include<iostream>
using namespace std;
int main()
{
	int n,add=0,s=1,num=0;
	double Ping_Jun;
	cin >> n;
	for (; n != 0; )
	{
		if (n % 2 == 0)
		{
			s = s * n;
		}
		else
		{
			num++;
			add = add + n;
		}
		cin >> n;
	}
	Ping_Jun = (double)add / (double)num;
	cout << "������ƽ��ֵΪ��" << Ping_Jun << endl << "ż���ĳ˻�Ϊ��" << s;
	return 0;
}