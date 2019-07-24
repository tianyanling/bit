#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int Change(int *px)
{
	int y = 8;
	y = y - *px;
	px=&y;
	return 0;
}

int main()
{
#if 0
	int a[10];
	int *pa;
	pa = a;
	printf("%d\n", &a[1]);
	printf("%d\n", pa+1);
#endif

	int xx = 3;
	int *py = &xx;
	Change(py);
	printf("%d\n", *py);
	system("pause");
	return 0;
}