//4.����һ�����飬ʵ�ֺ���init������ʼ�����顢ʵ��empty����������顢ʵ��reverse���������������Ԫ�ص����á�Ҫ���Լ���ƺ����Ĳ���������ֵ��

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
	printf("\n��ʼ������->:\n");
	init(arr, size);
	printf("\nת������->:\n");
	reverse(arr, size);
	printf("\n�������->:\n");
	empty(arr, size);
	printf("\n");
	system("pause");
	return 0;
}