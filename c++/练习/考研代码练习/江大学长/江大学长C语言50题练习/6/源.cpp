/*
判断输入的字符是否为字母
*/

/*
核心思想：
第一步：用一个字符变量接收用户输入的字符
第二步：用if语句判断该字符变量是否为字符，输出提示信息
*/

#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "请输入一个字符：";
	cin >> a;
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
	{
		cout << "该字符为字母！";
	}
	else cout << "该字符不是字母！";
	return 0;
}