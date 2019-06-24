//3.打印杨辉三角
//创建二维数组

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main3()
{
	int i, j,n = 10;
	int arry[20][20] = {0};
	for (i = 1; i <= n ; i++)
	{
		for (j = 1; j <= i; j++)
		{
			arry[i][j] = arry[i - 1][j - 1] + arry[i - 1][j];
			arry[1][1] = 1;
			arry[1][j] = 1;
			arry[i][1] = 1;
			printf("%3d  ", arry[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}