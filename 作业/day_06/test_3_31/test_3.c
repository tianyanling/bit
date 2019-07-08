//3.实现一个函数判断year是不是润年。

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int judgeLeapYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}
int main()
{
	int year;
	int ret = 0;
	printf("请输入一个年份：\n");
	scanf("%4d", &year);
	printf("%d\n",judgeLeapYear(year));
	system("pause");
	return 0;
}
