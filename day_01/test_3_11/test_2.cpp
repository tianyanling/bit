#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 53;
	int b = 72;
	printf("交换前a,b的值为：\na=%d\nb=%d\n", a, b);

	a = a + b;
	b = a - b;
	a = a - b;
	printf("交换后a,b的值为：\na=%d\nb=%d\n",a,b);

	system("pause");
	return 0;
}