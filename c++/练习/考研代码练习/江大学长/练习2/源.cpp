/*����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ���*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string n;
	int y = 0, k = 0, s = 0, q = 0;
	cout << "������һ���ַ���";
	getline(cin,n);
	for (int i = 0; i<n.length(); i++)
	{
		char a = n[i];
		if ((a >= 'a' && a<= 'z') || (a >= 'A' && a <= 'Z'))
			y++;
		else if (a == ' ')
			k++;
		else if (a >= '1' && a <= '9')
			s++;
		else q++;
	}
	cout << "Ӣ����ĸ�ĸ���Ϊ��" << y << endl;
	cout << "�ո�ĸ���Ϊ��" << k << endl;
	cout << "���ֵĸ���Ϊ��" << s << endl;
	cout << "�����ַ��ĸ���Ϊ��" << q << endl;
	return 0;
}