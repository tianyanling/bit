//1.递归和非递归分别实现求第n个斐波那契数。

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int fib(int n)																//递归
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	return (fib(n - 1) + fib(n - 2));
}

int main()
{
	int n;
	printf("请输入一个正整数：\n");
	scanf("%d",&n);
	printf("所得结果为：%d\n", fib(n));
	system("pause");
	return 0;
}