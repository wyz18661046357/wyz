/*
求两数的最小公倍数
*/

/*
核心思想：
第一步：用两个int变量接收用户输入的两个整数
第二步：判断两数中较小的那个数
第三步：用for循环从两数中较大的那个数开始向后依次加1遍历，直到当前的数能被这两个整数除尽为止，用一个int变量接收并输出这个数
*/

#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "请输入第一个数：";
	cin >> a;
	cout << "请输入第二个数：";
	cin >> b;
	int max=a;
	if (a < b)
	{
		max = b;
	}
	for (int i = max; ;i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			cout << "这两个数的最小公倍数为" << i;
			break;
		}

	}
	return 0;
}