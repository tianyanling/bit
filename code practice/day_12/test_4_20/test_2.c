//2.不使用（a+b）/2这种方式，求两个数的平均值

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int average_two(int a, int b)
{
	int average = 0;
	return (a&b) + ((a^b)>>1);
	//return (a + b) >> 1;
}
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个整数：\n");
	scanf("%d%d",&a,&b);
	int average = average_two(a, b);
	printf("这两个数的平均值为：%d \n", average);
	system("pause");
	return 0;
}