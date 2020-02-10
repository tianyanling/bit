//4.创建一个数组，实现函数init（）初始化数组、实现empty（）清空数组、实现reverse（）函数完成数组元素的逆置。要求：自己设计函数的参数，返回值。

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int init(int arr[], int size)
{
	int i = 0;
	for (i = 1; i <= size; i++)
	{
		arr[i] = i;
		printf("%d ",arr[i]);
	}
}


void reverse(int arr[], int size)
{
	int i = 0;
	int left = 1;
	int right = size;
	for (i = 1; i <= size; i++)
	{
		while (left < right)
		{
			int temp;
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			left++;
			right--;
		}
		printf("%d ", arr[i]);
	}
}

void empty(int arr[], int size)
{
	int i = 0;
	for (i = 1; i <= size; i++)
	{
		arr[i] = 0;
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[5];
	int i;
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("\n初始化数组->:\n");
	init(arr, size);
	printf("\n转置数组->:\n");
	reverse(arr, size);
	printf("\n清空数组->:\n");
	empty(arr, size);
	printf("\n");
	system("pause");
	return 0;
}