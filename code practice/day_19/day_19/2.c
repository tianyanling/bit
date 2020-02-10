#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void test(int** ptr)
{
	printf("num = %d\n", **ptr);
}

int main()
{
	int n = 10;
	int*p = &n;
	int **pp = &p;
	test(pp);
	test(&p);
	system("pause");
	return 0;
}
