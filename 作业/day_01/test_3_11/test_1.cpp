#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

	int main()
{
	int a = 10;
	int b = 20;
	int temp;						//��ʱ����
	printf("����ǰa,b��ֵΪ��\na=%d\nb=%d\n",a,b);
	temp = a;
	a = b;
	b = temp;
	printf("������a,b��ֵΪ��\na=%d\nb=%d\n",a,b);
	system("pause");
	return 0;
}