//2.理解函数指针和定义 

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void test1()
{
	printf("hehe\n");
}

int main2()
{
	printf("%p\n", test1);
	printf("%p\n", &test1);
	system("pause");
	return 0;
}