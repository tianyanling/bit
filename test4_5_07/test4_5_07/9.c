//给出一个不多于5位数的正整数
//（1）求出它是几位数
//（2）分别输出每一位数字
//（3）按逆序输出各位数字，例如原数为3221，应输出123

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int str[10];
	int i=0, n;
	int count = 0;
	printf("请输入一个不多于5位数的正整数：");
	scanf("%d",&n);
	if (n > 9999 || n < 0)
	{
		printf("输入错误，请重新输入！\n");

	}
	printf("逆序的字符为：");
	while (n !=0)
	{
		i = n % 10;
		printf("%d", i);
		n = n / 10;
		count++;
	}
	printf("\n");
	printf("该数是%d位数\n", count);
	system("pause");
	return 0;
}