//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void printform(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%-2d*%-2d=%-3d ", i, j, i*j);
		}
		printf("\n");
	}
}

int main()
{
	int n;
	printf("请输入乘法口诀表的行列数：\n");
	scanf("%2d",&n);
	printform(n);
	system("pause");
	return 0;
}
