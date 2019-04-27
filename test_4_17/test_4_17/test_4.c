//4.编程实现： 两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :1999 2299,输出例子 : 7

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int BitDiff(int m, int n)
{
	int count = 0;
	for (int i = 0; i < 32; i++)
	{
		if (m % 2 != n % 2)
		{
			count++;
		}
		m /= 2;
		n /= 2;
	}
	return count;
}
int main4()
{
	int count = 0;
	 int m, n;
	printf("请输入两个正整数：\n");
	scanf("%d%d",&m,&n);
	int ret=BitDiff(m, n);
	printf("%d\n",  ret);
	system("pause");
	return 0;
}