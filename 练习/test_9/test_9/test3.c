//����һ���������飬������������Ҳ�и�����������һ������������������һ�������飬������������ĺ͵����ֵ��Ҫ��ʱ�临�Ӷ�ΪO(n)��
//�������������Ϊ{1,-2,3,10,-4,7,2,-5}��������������Ϊ{3,10,-4,7,2}��������Ϊ��������ĺ�18.
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[] = { 1, -2, 3, 10, -4, 7, 2, -5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int sum = 0;
	int max = arr[0];//�洢���е����ֵ
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