/*
海滩上有一堆桃子，五只猴子来分。第一只猴子吧这堆桃子平均分为五份，多了一个，这只猴子又把多的一个扔入海中，拿走了一份。
第二只猴子把剩下的桃子又平均分成五份，又多一个，它同样把多的一个扔入海中，拿走了一份，
第三、第四、第五只猴子都是这样做的，问海滩上原来最少有多少个桃子？
*/

#include<iostream>
using namespace std;

int main()
{
	int n = 5;
	int sum;
	int i=1,ii = 1;
	int nnn;
	while(1)
	{
		sum = 0;
		int b = ii;
		for (i=1; i <=6; )
		{
			if (i ==1)
			{
				sum = ii * 4;
				i++;
			}
			else
			{
			if (sum % 4 != 0)
				break;
			else
			{
				sum = (sum/4)*5+1;
				i++;
			}
			}
		}
		if (i == 7)
			break;
		ii++;
	}
	cout << sum<<' '<<i;
	return 0;
}
