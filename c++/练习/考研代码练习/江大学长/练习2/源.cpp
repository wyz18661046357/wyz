/*输入一行字符，分别统计出其中英文字母、空格、数字和其他字符的个数*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string n;
	int y = 0, k = 0, s = 0, q = 0;
	cout << "请输入一串字符：";
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
	cout << "英文字母的个数为：" << y << endl;
	cout << "空格的个数为：" << k << endl;
	cout << "数字的个数为：" << s << endl;
	cout << "其他字符的个数为：" << q << endl;
	return 0;
}