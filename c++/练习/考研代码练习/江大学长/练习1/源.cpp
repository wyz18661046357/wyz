/*从键盘输入一个小于1000的正数，要求输出它的平方根（如平方根不是整数，则输出其整数部分）。
要求在输入数据时对其进行检查是否为小于1000的正数。若不是，则重新输入。*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "请输入一个小于1000的正数：";
	cin >> n;
	for (; n >= 1000 || n <= 0;)
	{
		cout << "输入的数据有误！请重新输入！"<<endl;
		cout << "请输入一个小于1000的正数：";
		cin >> n;
	}
	int i = sqrt(n);
	cout << i;
	return 0;
}