/*
已知数组A[1...n]的元素类型为整型int，设计一个时间和空间上尽可能高效的算法，将其调整为左右两部分，
左边所有元素为奇数，右边所有元素为偶数，不要求对这些元素进行排序。
（1）给出算法的基本设计思想
（2）根据设计思想，采用C语言表述算法，关键之处给出注释
*/
#include<iostream>
using namespace std;
int main()
{

	int A[100];
	int B[100];
	int n;
	cout << "请输入数组的元素数量：";
	cin >> n;
	int nn = n;
	B[nn] = '\0';
	for (int i = 0,mm=0; i < n; i++)
	{
		
		cin >> A[i];
		if (i == (n - 1))
		{
			A[n] = '\0';
		}
		if (A[i] % 2 == 0)
		{
			B[nn - 1] = A[i];
			nn--;
		}
		else if(A[i]%2==1)
		{
			B[mm] = A[i];
			mm++;
		}

	}
	for (int i = 0; i < n; i++)
	{
		A[i] = B[i];
		cout << A[i] << ' ';
	}
	return 0;
}