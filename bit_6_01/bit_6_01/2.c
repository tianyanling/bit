//�ӱ�׼�����ȡһ��������������������洢��һ����̬���ٵ������У�����ĵ�һ��Ԫ��Ϊ�����ĸ������Ժ��������������

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define N 10

int main()
{
	int *p = NULL;
	int num;
	int n = 0;
	int i;
	int size = N;
	p = (int *)malloc(sizeof(int)*(size + 1));
	while (1 == scanf("%d", &num))//�����ַ�����ѭ��
	{
		n++;
		if (n > size)
		{
			size = size + N;
			int *q= NULL;
			q = (int *)realloc(p, sizeof(int)*(size + 1));
			if (q != NULL)
			{
				p = q;
			}
		}
		p[n] = num;
	}
	printf("%d\n", n);
	p = (int *)realloc(p, sizeof(int)*(n + 1));
	for (i = 0; i < n; i++)
	{
		printf("%d ", p[i+1]);
	}
	printf("\n");
	free(p);
	p = NULL;
	system("pause");
	return 0;
}