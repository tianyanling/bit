/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>*///#include<stdlib.h>也可以
//#define N 10s

//用malloc只开辟空间不释放，会导致内存泄漏
//const int n = 10;//在C语言里是只读变量，在c++里是常量
//int main()
//{
//	//int *p = NULL;
//	//p = (int*)malloc(sizeof(int));//4个字节
//	//*p = 8;
//	//printf("%d\n", *p);
//	//free(p);
//	//p = NULL;
//	////把这段空间还给内存,free之后，应把这段空间置空
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
//	q=(int*)realloc(p, 6 * sizeof(int));//判断q是否为空
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