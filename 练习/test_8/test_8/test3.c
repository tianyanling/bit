//��д��������������Ԫ�س��ִ����������鳤��һ������֡�
//�磺{1,2,3,2,2,2,5,4,2}����2�ǳ������鳤�ȵ�һ������֡�
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int Sort(int a[],int len)
{
	int i, j;
	int temp;
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len - i - 1; j++)
		{
			if (a[j]>a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	return 0;
}
int main()
{
	int a[] = { 1, 2, 3, 2, 2, 2, 5, 4, 2 };
	int len = sizeof(a) / sizeof(a[0]);
	int count=0;
	int i;

	Sort(a,len);

	for (i = 0; i < len; i++)
	{
		if (a[i] == a[len / 2])
		{
			count++;
		}
	}
	if (count > len / 2)
	{
		printf("%d\n", a[len/2]);
	}
	else
	{
		printf("û�г��ִ�����������һ�������\n");
	}
	system("pause");
	return 0;
}