//2.写代码可以在整型有序数组中查找想要的数字， 找到了返回下标，找不到返回 - 1.（在主函数内）
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main2()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int left = 0;
	int right = sizeof(arr)/sizeof(arr[0])-1;
	int key = 2;
	int mid = 0;

	while (left <= right)
	{
		mid =( (right - left) / 2 + left);
		if (arr[mid] < key)
		{
			left = mid = 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
			break;
	}
	if (left <= right)
	{
		printf("找到了，下标是%d：\n",mid);
	}
	else
	{
		printf("没找到\n");
	}

	system("pause");
	return 0;
}
