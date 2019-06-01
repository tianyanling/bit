//从标准输入读取一段整数，并将这段整数存储在一个动态开辟的数组中，数组的第一个元素为整数的个数，以后依次是这段整数

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define N 10

int main()
{
	int *p = NULL;
	int num;
	int n = 0;
	int i;
	int size = N;
	p = (int *)malloc(sizeof(int)*(size + 1));
	while (1 == scanf("%d", &num))//输入字符跳出循环
	{
		n++;
		if (n > size)
		{
			size = size + N;
			int *q= NULL;
			q = (int *)realloc(p, sizeof(int)*(size + 1));
			if (q != NULL)
			{
				p = q;
			}
		}
		p[n] = num;
	}
	printf("%d\n", n);
	p = (int *)realloc(p, sizeof(int)*(n + 1));
	for (i = 0; i < n; i++)
	{
		printf("%d ", p[i+1]);
	}
	printf("\n");
	free(p);
	p = NULL;
	system("pause");
	return 0;
}