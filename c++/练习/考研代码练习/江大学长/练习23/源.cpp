/*
找出一个二维数组中的鞍点，即该位置上的元素在该行上最大，在该列上最小。也可能没有鞍点。
*/
#include<iostream>
using namespace std;
int main()
{
	int a[5][5] = { 1,2,3,4,5,
				    2,3,4,5,6,
				    3,4,5,6,3,
				    0,0,0,0,1,
				    5,6,7,8,9 };
	int max, min,h,l,hh,ll,d=0;
	for (int i = 0; i < 5; i++)
	{			
		max = a[i][0];h = i; l = 0;
		for (int j = 0; j < 5; j++)
		{

			if (max < a[i][j])
			{
				max = a[i][j]; h = i; l = j;
			}
		}			
		min = a[0][l];hh = 0; ll = l;
		for (int n = 0; n < 5; n++)
		{

			if (min> a[n][l])
			{
				min = a[n][l];
				hh = n; ll = l;
			}

		}
		if (h == hh && l == ll)
		{
			cout << "鞍点为第" << h + 1 << "行第" << l + 1 << "列的" << max << "数";
			d = 1;
		}
	}
	if (d==0)
	{
		cout << "没有鞍点";
	}
	return 0;
}