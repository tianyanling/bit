//2.获取一个数二进制序列中所有的偶数位和奇数位， 分别输出二进制序列。

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main2()
{
	char num[34] = { 0 };
	int i,n=123456;
	for (i = 31; i >= 0; i--, n /= 2)
	{
		num[i/2] = n % 2 + '0';
	}

	for (i = 0; num[i]; i += 2)
	{
		printf("%c",num[i]);
	}
	putchar('\n');
	for (i = 1; num[i]; i += 2)
	{
		printf("%c", num[i]);
	}
	system("pause");
	return 0;
}