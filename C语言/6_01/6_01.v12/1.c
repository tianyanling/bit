/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>*///#include<stdlib.h>Ҳ����
//#define N 10s

//��mallocֻ���ٿռ䲻�ͷţ��ᵼ���ڴ�й©
//const int n = 10;//��C��������ֻ����������c++���ǳ���
//int main()
//{
//	//int *p = NULL;
//	//p = (int*)malloc(sizeof(int));//4���ֽ�
//	//*p = 8;
//	//printf("%d\n", *p);
//	//free(p);
//	//p = NULL;
//	////����οռ仹���ڴ�,free֮��Ӧ����οռ��ÿ�
//
//	int *p = NULL;
//	int i = 0;
//	p = (int*)malloc(sizeof(int)*N);
//	for (i = 0; i < N; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < N; i++)
//	{
//		printf("%d", p[i]);
//	}
//	printf("\n");
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int i;
//	int *p = NULL;
//	int *q = NULL;
//	p = (int*)malloc(4);
//	//q = (int*)malloc(20);
//	*p = 6;
//	printf("%d\n", *p);
//	//p = (int*)realloc(p, 6 * sizeof(int));
//	q=(int*)realloc(p, 6 * sizeof(int));//�ж�q�Ƿ�Ϊ��
//	if (q != NULL)
//	{
//		p = q;
//	}
//	for (i = 1; i < 6; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 1; i < 6; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}