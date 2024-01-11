/*
循环输出23个字母
*/

/*
核心思想：
第一步：定义一个字符变量接收当前的字母，用for循环输出
*/

#include<iostream>
using namespace std;
int main()
{
	char str;
	for (int i = 0; i <= 25; i++)
	{
		str = 'a' + i;
		cout << str << ' ';
		str = 'A' + i;
		cout << str << ' ';
	}
	return 0;
}