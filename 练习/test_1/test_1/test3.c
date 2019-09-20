#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, n, tmp;
	char arr[4][4] = { 
	1, 2, 8, 9,
	2, 4, 9, 12,
	4, 7, 10, 13,
	6, 8, 11, 15 };
	printf("请输入一个整数：");
	scanf("%d", &n);
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (n == arr[i][j])
			{
				tmp = 1;
			}
		}
	}
	if (tmp==1)
	{
		printf("%d在数组中\n",n);
	}
	else
	{
		printf("%d不在数组中\n",n);
	}
	system("pause");
	return 0;
}