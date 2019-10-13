//ì³²¨ÄÇÆõÊýÁÐ
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int Fib(int i)
{
	if (i < 0)
	{
		return -1;
	}
	if (i == 0)
	{
		return 0;
	}
	else if (i == 1)
	{
		return 1;
	}
	else
	{
		return Fib(i-1) + Fib(i-2);
	}
}

int main1()
{
	printf("%d\n", Fib(2));
	system("pause");
	return 0;
}