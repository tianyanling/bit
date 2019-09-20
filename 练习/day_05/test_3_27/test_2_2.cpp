//2.写代码可以在整型有序数组中查找想要的数字， 找到了返回下标，找不到返回 - 1.（折半查找）
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int bin_search(int arr[], int sz, int key)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = ((right - left) / 2 + left);
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main3()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int key = 12;
	int ret = bin_search(arr, sz, key);

	if (-1 == ret)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	system("pause");
	return 0;
}
/*
int  searchArray(int arr[], int size, int f)
{
	int i;
	for (i = 0; i < size; i++)
	{

	}
	}*/