//背包问题
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void bubble1(int data[],int num)
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
int main1()
{
	int size, num;
	int weight[20] = { 0 };
	int i, count = 0, sum = 0;
	scanf("%d%d", &num, &size);
	for (int i = 0; i < num; i++)
	{
		scanf("%d", weight + i);
	}
	bubble(weight, num);
	//weight表示物品个数，num表示背包大小
	for (i = 0; sum + weight[i] < size && i < num; i++)
	{
		sum += weight[i];
	}
	printf("%d\n",i);
	system("pause");
	return 0;
}