//1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大）
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main1()
{
	int a[10] ;
	int b[10] ;
	int temp, i = 0, j = 0;
	a[i] = i;
	b[j] = j;
	printf("请输入两组长度相同的数字:\n");
	scanf("%d%d", &a[i], &b[j]);
	printf("变换前：a[i]=%d b[j]=%d\n",a[i],b[j]);
	if (a[i] != b[j])
	{
		temp = a[i];
		a[i] = b[j];
		b[j] = temp;
	}
	printf("变换后：a[i]=%d b[j]=%d\n", a[i], b[i]);

	system("pause");
	return 0;
}
