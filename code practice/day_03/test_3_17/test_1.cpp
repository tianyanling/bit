//1. ������A�е����ݺ�����B�е����ݽ��н�����������һ����
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main1()
{
	int a[10] ;
	int b[10] ;
	int temp, i = 0, j = 0;
	a[i] = i;
	b[j] = j;
	printf("���������鳤����ͬ������:\n");
	scanf("%d%d", &a[i], &b[j]);
	printf("�任ǰ��a[i]=%d b[j]=%d\n",a[i],b[j]);
	if (a[i] != b[j])
	{
		temp = a[i];
		a[i] = b[j];
		b[j] = temp;
	}
	printf("�任��a[i]=%d b[j]=%d\n", a[i], b[i]);

	system("pause");
	return 0;
}
