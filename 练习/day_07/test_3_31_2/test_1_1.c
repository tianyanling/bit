//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int fib(int n)																//�ݹ�
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	return (fib(n - 1) + fib(n - 2));
}

int main()
{
	int n;
	printf("������һ����������\n");
	scanf("%d",&n);
	printf("���ý��Ϊ��%d\n", fib(n));
	system("pause");
	return 0;
}