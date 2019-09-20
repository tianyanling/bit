#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int fib(int n)
{
	int old = 1;//第1项
	int new = 1;//第2项
	int result = 0;
	int i;
	if (n == 1 || n == 2)
	{
		result = 1;
	}
	for (i = 2; i < n;i++)
	{
		result = old + new;
		old = new;
		new = result;
	}
	return result;
}

int main()
{
	int n;
	printf("请输入项数：");
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}