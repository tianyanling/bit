//1.��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ������һ���������飬ʵ��һ�������������������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡�

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void odd(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;

	while (arr[left++] % 2 && left < sz)
		//�Ѿ��жϵ���λ�����Զ������ת
	while (arr[right--] % 2 == 0 && right >= 0)
		//�Ѿ��жϵ���λż���Զ���ǰ��ת
		while (left - 1 < right + 1)
		{
		tmp = arr[left + 1];
		arr[left + 1] = arr[right - 1];
		arr[right - 1] = tmp;

		while (arr[left++] % 2);
		while (arr[right++] % 2 == 0);
		}
}

int main1()
{
	int arr[] = {1,2,3,4,5,6,7};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	odd(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

//int main()
//{
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int s[10] = { 0 };
//	int d[10] = { 0 };
//	int i, counts = 0, countd = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (a[i] % 2)
//		{
//			s[counts++] = a[i];
//		}
//		else
//		{
//			d[countd++] = a[i];
//		}
//	}
//	system("pause");
//	return 0;
//}