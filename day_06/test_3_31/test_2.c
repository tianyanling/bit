//2.ʹ�ú���ʵ���������Ľ���
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int a = 0;
	int b = 0;
	printf("����������������\n");
	scanf("%d%d", &a, &b);
	printf("����ǰ��a = %d b = %d\n",a,b);
	swap(&a, &b);
	printf("������a = %d b = %d\n",a,b);
	system("pause");
	return 0;
}