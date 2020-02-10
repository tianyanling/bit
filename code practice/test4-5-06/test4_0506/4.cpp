//有三个整数a,b,c，由键盘输入，输出其中最大的数

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, c;
	printf("请输入三个整数：\n");
	scanf("%d%d%d",&a,&b,&c);
	if (a < b)
	{
		if (b < c)
			printf("max=%d\n", c);
		else
		{
			printf("max=%d\n", b);
		}
	}
	else if (a < c)
	{
		printf("max=%d\n",c);
	}
	else
	{
		printf("max=%d\n",a);
	}
	system("pause");
	return 0;
}