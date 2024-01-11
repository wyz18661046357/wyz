/*
求1-1000能被13整除的最大数
*/

/*
核心思想：
第一步：用for循环语句从1000往下逐步-1遍历，直到（该数%13==0）结束循环，输出该数
*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	for (int i = 1000; i >= 1; i--)
	{
		if (i % 13 == 0)
		{
			cout << "1-1000能被13整除的最大数为：" << i;
			break;
		}
	}
	return 0;
}