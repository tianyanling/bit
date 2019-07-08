//1.递归和非递归分别实现求第n个斐波那契数。

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()																		//非递归
{
	int n = 2;
	int an = 0, an_1 = 1, an_2 = 1;
	printf("请输入一个正整数：\n");
	scanf("%d",&n);
	for (int i = 2; i < n; i++)
	{
			an = an_1 + an_2;
			an_2 = an_1;
			an_1 = an;
	}
	printf("所得结果为：%d\n", an);
	if (n == 1 || n == 2)
	{
		printf("所得结果为:1\n", n);
	}
	system("pause");
	return 0;
}