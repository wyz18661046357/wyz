#define _CRT_SECURE_NO_WARNINGS
#define InitSize 10
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
/*typedef struct {
	int *data;
	int MaxSize;
	int length;
}SqList;

void InitList(SqList& L)
{
	L.data = (int*)malloc(InitSize * sizeof(int));
	L.length = 0;
	L.MaxSize = InitSize;
}
void IncreaseSize(SqList& L, int n)
{
	int* p = L.data;
	L.data = (int*)malloc((InitSize + n) * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		L.data[i] = p[i];
	}
	L.MaxSize = InitSize + n;
	free(p);
}
bool ListInsert(SqList& L, int i, int e)
{
	if (i<1 || i>L.length + 1)
		return false;
	if (L.length >= L.MaxSize)
		return false;
	for (int n = L.length; n >= i; n--)
	{
		L.data[n] = L.data[n - 1];
	}
	L.data[i - 1] = e;
	L.length++;
	return true;
}
bool ListDelete(SqList& L, int i, int& e)
{
	if (i<1 || i>L.length)
		return false;
	if (L.length == 0)
		return false;
	e = L.data[i - 1];
	for (int n = i; n < L.length; n++)
	{
		L.data[n - 1] = L.data[n];
	}
	L.length--;
	return true;
}*/
int fun(int n, int m)
{
	if (n == 1 && m == 0)
		return 2;
	else if (n == 0 && m >= 0)
		return 1;
	else if (m == 0 && n >= 2)
		return n + 2;
	else
		return fun(fun(n - 1, m), m - 1);
}
int main()
{
	/*SqList L;
	InitList(L);
	IncreaseSize(L, 5);
	ListInsert(L, 1, 9);
	int e=0;
	//ListDelete(L, 1, e);
	cout << L.length;*/
	cout << fun(2, 3);
	return 0;
}