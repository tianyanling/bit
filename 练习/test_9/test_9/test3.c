//输入一个整型数组，数组里由整数也有负数，数组中一个或连续多个整数组成一个子数组，求所有子数组的和的最大值，要求时间复杂度为O(n)。
//例如输入的数组为{1,-2,3,10,-4,7,2,-5}，和最大的子数组为{3,10,-4,7,2}，因此输出为该子数组的和18.
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[] = { 1, -2, 3, 10, -4, 7, 2, -5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int sum = 0;
	int max = arr[0];//存储所有的最大值
	int i = 0;
	for (i = 0; i < len; i++)
	{
		if (sum <= 0)
		{
			sum = arr[i];
		}
		else
		{
			sum += arr[i];
		}
		if (sum > max)
		{
			max = sum;
		}
	}
	printf("%d\n", max);
	system("pause");
	return 0;
}