//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��������9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void printform(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%-2d*%-2d=%-3d ", i, j, i*j);
		}
		printf("\n");
	}
}

int main()
{
	int n;
	printf("������˷��ھ������������\n");
	scanf("%2d",&n);
	printform(n);
	system("pause");
	return 0;
}
