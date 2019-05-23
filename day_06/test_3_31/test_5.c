//5.实现一个函数，判断一个数是不是素数。

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int judgePrime(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;																//0表示不是素数
		}

		return 1;																	//1表示是素数
	}
}

int main()
	{
		int n = 0;
		printf("请输入一个正整数：\n");
		scanf("%d",&n);
		printf("%d", judgePrime(n));
		printf("\n");
		system("pause");
		return 0;
	}
