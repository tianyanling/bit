//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()																		//�ǵݹ�
{
	int n = 2;
	int an = 0, an_1 = 1, an_2 = 1;
	printf("������һ����������\n");
	scanf("%d",&n);
	for (int i = 2; i < n; i++)
	{
			an = an_1 + an_2;
			an_2 = an_1;
			an_1 = an;
	}
	printf("���ý��Ϊ��%d\n", an);
	if (n == 1 || n == 2)
	{
		printf("���ý��Ϊ:1\n", n);
	}
	system("pause");
	return 0;
}