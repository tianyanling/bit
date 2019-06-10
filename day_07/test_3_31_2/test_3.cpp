//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int DigitSum(int n)
{
	int m = 0;
	int sum = 0;
	if (n !=0)
	{
		m = n % 10;
		n = n / 10;
		sum = m + DigitSum(n);
	}
	return sum;
}

int main()
{
	int n;
	printf("请输入一个正整数：\n");
	scanf("%d",&n);
	printf("各位数之和为：%d", DigitSum(n));
	printf("\n");
	system("pause");
	return 0;
}