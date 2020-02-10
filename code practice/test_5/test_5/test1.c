#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int Change1(int *px)
{
	int y = 8;
	y = y - *px;
	px=&y;
	return 0;
}

int main1()
{
#if 0
	int a[10];
	int *pa;
	pa = a;
	printf("%d\n", &a[1]);
	printf("%d\n", pa+1);
#endif

#if 0
	int xx = 3;
	int *py = &xx;
	Change(py);
	printf("%d\n", *py);
#endif

#if 0
	char arr[2][4];
	strcpy((char *)arr, "you");
	strcpy(arr[1], "me");
	arr[0][3] = '&';
	printf("%s\n", arr);
#endif
	system("pause");
	return 0;
}