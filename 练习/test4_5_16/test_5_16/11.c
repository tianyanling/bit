//ð�ݷ�����

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[10];
	int i, j, tmp;
	printf("������10λ������");
	for (i = 0; i < 10; i++);
	{
		scanf("%d", &a[i]);
	}
	printf("\n");
	for (j = 0; j < 9; j++)
	{
		for (i = 0; i < 9 - j; i++)
		{
			if (a[i]>a[i + 1])
			{
				tmp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = tmp;
			}
		}
	}
	printf("�������ַ�Ϊ��\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

