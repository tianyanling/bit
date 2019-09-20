#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main2()
{
	/*int a = 10;
	int n;
	n = a += a *= a -= a / 3;
	printf("%d\n", n);*/
	int a[4][5];
	printf("%d\n", a[1] + 3);
	printf("%d\n", &a[1][3]);
	system("pause");
	return 0;
}