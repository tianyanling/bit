#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int fun(int x, int y)
{
	static int m = 0;
	static int i = 2;
	i += m + 1;
	m = i + x + y;
	return m;
}

int main()
{
	int j = 4;
	int m = 1;
	int k;
	k = fun(j,m);
	printf("%d ", k);
	k = fun(j, m);
	printf("%d\n", k);
	system("pause");
	return 0;
}