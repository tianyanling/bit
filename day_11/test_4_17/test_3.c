//3. 输出一个整数的每一位。

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main3()
{
	int n,a;
	printf("请输入一个正整数：\n");
	scanf("%d",&n);
	while (n>0)
	{
		a = n % 10;
		printf("%d\n",a);
		n /= 10;
	}
	system("pause");
	return 0;
}