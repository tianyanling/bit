//2.��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int average_two(int a, int b)
{
	int average = 0;
	return (a&b) + ((a^b)>>1);
	//return (a + b) >> 1;
}
int main()
{
	int a = 0;
	int b = 0;
	printf("����������������\n");
	scanf("%d%d",&a,&b);
	int average = average_two(a, b);
	printf("����������ƽ��ֵΪ��%d \n", average);
	system("pause");
	return 0;
}