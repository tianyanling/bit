//Ҫ�����õ���������ͷ��㣩
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char s[] = "\\123456\123456\t";
	printf("%d\n", strlen(s));
	system("pause");
	return 0;
}