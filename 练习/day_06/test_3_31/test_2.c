//2.使用函数实现两个数的交换
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个整数：\n");
	scanf("%d%d", &a, &b);
	printf("交换前：a = %d b = %d\n",a,b);
	swap(&a, &b);
	printf("交换后：a = %d b = %d\n",a,b);
	system("pause");
	return 0;
}