//合并石子问题 (最小得分)

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void bubble(int data[], int num)
//冒泡排序（相邻的两个比较）
{
	int i, j;
	for (i = 0; i < num - 1; i++)
	{
		for (j = 0; j < num - i - 1; j++)
		{
			if (data[j]>data[j + 1])
			{
				int tmp;
				tmp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = tmp;
			}
		}
	}
}
int main3()
{
	int  n;
	int num[20] = { 0 };
	int i, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", num + i);
	}
	for (i = 0; i < n - 1; i++)
	{
		bubble(num + i, n -i);
		num[i + 1] = num[i] + num[i + 1];
		sum += num[i + 1];			//计算得分
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}
