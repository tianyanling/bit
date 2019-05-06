//第四章第6题
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x, y;
	printf("请输入一个整数x：\n");
	scanf("%d", &x);
	if (x < 1)
	{
		y = -1;
		printf("y=%d\n",y);
	}
	else if (x >= 10)
	{
		y = 3 * x - 11;
		printf("y=%d\n",y);
	}
	else
	{
		y = 2 * x - 1;
		printf("y=%d\n",y);
	}
	system("pause");
	return 0;
}