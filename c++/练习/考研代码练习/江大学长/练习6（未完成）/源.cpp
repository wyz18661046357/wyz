/*
����ƹ����ӽ��б���,���� 3 �ˡ��׶�Ϊ A,B,C 3 ��,�Ҷ�Ϊ X,Y,Z 3 �ˡ��ѳ�ǩ��������������
�������Ա��������������,A ˵������ X ��,C ˵������ X,Z ��,�������ҳ� 3 �����ֵ�������
*/
#include<iostream>
using namespace std;
int main()
{
	char i, a, b;
	for (a = 'a'; a <= 'c'; a++)
	{
		for (b = 'x'; b <= 'z'; b++)
		{
			if (a == 'a' && b == 'x')
			{
				break;
			}
			else
			{
				for (i = 'x'; i <= 'z'; i++)
				{
					if ((a == 'c') && (i == 'x' || i == 'z'))
					{
						break;
					}
					else
					{
						cout << a << b << i;
					}
				}
			}
		}
	}
	return 0;
}