//用选择法对数组中的10个整数按由小到大排序

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void sort(int arr[], int n)
{
	int i, j, k, t;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[k])
			{
				k = j;
			}
		}
		t = arr[k];
		arr[k] = arr[i];
		arr[i] = t;
	}
}

int main()
{
	void sort(int arr[], int n);
	int a[10], i;
	printf("enter arr:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, 10);
	printf("The sorted arr:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}