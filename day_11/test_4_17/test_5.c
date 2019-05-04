#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void odd(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;

	while (arr[left++] % 2 && left < sz)
		//已经判断的那位奇数自动向后跳转
		while (arr[right--] % 2 == 0 && right >= 0)
			//已经判断的那位偶数自动向前跳转
			while (left - 1 < right + 1)
			{
		tmp = arr[left + 1];
		arr[left + 1] = arr[right - 1];
		arr[right - 1] = tmp;

		while (arr[left++] % 2);
		while (arr[right++] % 2 == 0);
			}
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	odd(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
