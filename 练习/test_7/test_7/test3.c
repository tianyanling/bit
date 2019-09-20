//有一个数组a,编写函数，求数组中前k个最小的数字
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char a[] = { 21, 3, 45, 11, 6, 8, 5, 9, 6, 7, 89, 32 };
	int k, i, j,temp;
	printf("k=");
	scanf("%d", &k);
	for (i = 0; i < k; i++)
	{
		for (j = 0; j < k - i - 1; j++)
		{
			if (a[j]>a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	printf("%d\n", a[0]);
	system("pause");
	return 0;
}