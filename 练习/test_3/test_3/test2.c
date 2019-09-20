#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main2()
{
	int x, y, z;
	x = z = 2;
	y = 3;
	if (x > y)
		z = 1;
	else if (x == y)
		z = 0;
	else
		z = -1;
	printf("%d\n", z);
	system("pause");
	return 0;
}