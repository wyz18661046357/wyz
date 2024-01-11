/*
求1*1+2*2+i*i+n*n<1000（n的最大值）
*/

/*
核心思想：
第一步：用for循环从1开始+1遍历，用一个整型变量接收计算的和，直到和>=1000的时候停止循环，输出此时的n
*/

#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	int n;
	for (n = 1; sum < 1000; n++)
	{
		sum = sum + n * n;
		if (sum > 1000)
		{
			sum = sum - n * n;
			n=n - 1;
			
			break;

		}
	}
	cout << "n=" << n<<endl<<"sum="<<sum;
	return 0;
}