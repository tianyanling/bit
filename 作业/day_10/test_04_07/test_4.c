//打印杨辉三角
//创建一维数组

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j,n = 10;
	int arry[20] = {0};

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			arry[i] = 1;
	
			arry[j] = arry[j + 1] + arry[j];
			printf("%d ",arry[j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}