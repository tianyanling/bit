#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

	int main()
{
	int a = 10;
	int b = 20;
	int temp;						//临时变量
	printf("交换前a,b的值为：\na=%d\nb=%d\n",a,b);
	temp = a;
	a = b;
	b = temp;
	printf("交换后a,b的值为：\na=%d\nb=%d\n",a,b);
	system("pause");
	return 0;
}