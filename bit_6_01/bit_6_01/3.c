#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

//void test()
//{
//	int *p = (int *)malloc(INT_MAX / 4);
//	*p = 20;//如果p的值是NULL，就会有问题
//	printf("%d\n", *p);
//	free(p);
//}

//void test()
//{
//	int i = 0;
//	int *p = (int *)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <=10; i++)//for (i = 0; i <10; i++)
//	{
//		*(p + i) = i;//当i是10的时候越界访问
//	}
//	free(p);
//}

//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}


//int *find(int (*p)[4],int n)
//{
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (p[i][j] >= 60)
//			{
//				return *p[i];
//			}
//		}
//	}
//}
//int main()
//{
//	Test();
//	system("pause");
//	return 0;
//}


//struct S
//{
//	int aa;
//	int arr[0];//柔性数组只能出现在结构的最后一个元素
//};
//
//int main()
//{
//	//printf("%d\n", sizeof(struct S));
//
//	system("pause");
//	return 0;
//}