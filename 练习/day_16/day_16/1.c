//1.�������ָ�� 

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

#include <stdio.h>
void print_arr1(int arr[3][5], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i<row; i++)
	{
		for (j = 0; j<col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void print_arr2(int(*arr)[5], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i<row; i++)
	{
		for (j = 0; j<col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main1()
{
	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	print_arr1(arr, 3, 5);
	//������arr����ʾ��Ԫ�صĵ�ַ
	//���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ��
	//�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
	//��������ָ��������
	printf("\n");
	print_arr2(arr, 3, 5);
	system("pause");
	return 0;
}