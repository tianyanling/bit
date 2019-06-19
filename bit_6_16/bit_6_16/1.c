#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int test()
{
	int i = 7;
	int j;
	j = i++ + i++ + i++;
	printf("%d,%d\n", i, j);
	system("pause");
	return 0;
}