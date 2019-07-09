//指针
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
//基类型 *指针变量名（基类型是当前指针所指向变量的类型）
/*
int *p;	单指针
int **p;		双指针
int (*p2)[3];	数组指针
int *p3[4];	指针数组
int (*p4)(int,int);	函数指针
int *p5(int,int);	指针函数
int (*p6[3])(int,int);		函数指针数组
方法：先看右边再看左边再看右边，先看的写在最后
*/

#if 0
void swap1(int a, int b)
{
	int  t;
	t = a;
	a = b;
	b = t;
}

void swap2(int *x, int *y)
{
	int * t;
	t = x;
	x = y;
	x = t;
}
void swap3(int *x, int *y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}
int main()
{
	int a = 5, b = 7;
	//int *p = NULL;//野指针是指指向垃圾内存的指针（即没有合法的内存空间）
	swap3(&a, &b);
	printf("%d,%d\n", a, b);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	char a[] = { 1, 1, 1, 1, 1 };
	int *p = (int *)a;//数组名代表数组首元素的地址
	printf("*p=%d\n", *p);//16843009
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int a[] = { 1, 2, 3, 4, 5 };
	int b[3][5];
	int *p = (int*)(&a + 1);//表示给a 加上一整个数组
	//int *p=a+1;//表示把a+1的地址给p
	printf("%d\n", *(p - 1));//5
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int a[3][4];
	printf("%d,%d,%d\n", a, a[0], &a[0][0]);
	printf("%d,%d\n", a, a + 1);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{//数组实现冒泡排序
	int a[] = { 7, 6, 8, 9, 0, 1, 2, 3, 4, 5 };
	int i, j,t;
	int n = sizeof(a) / sizeof(a[0]);
	int *p = a;
	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (a[j]>a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", *(a+i));
	}
	printf("\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", *(p+i));
	}
	printf("\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", p[i]);
	}
	printf("\n");
	for (p = a; p < a+10; p++)//效率高，前四种效率一样
	{
		printf("%d ", *p);
	}
	printf("\n");
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{//指针实现冒泡排序
	int a[] = { 7, 6, 8, 9, 0, 1, 2, 3, 4, 5 };
	int n = sizeof(a) / sizeof(a[0]);
	//int *p = a, *q = a + n - 1;
	//while (p < q)
	//{
	//	int t = *p;
	//	*p = *q;
	//	*q = t;
	//	++p;
	//	--q;
	//}
	int *p = a, *q = a + 1, *end = a + n - 1;//p表示趟数,end表示第一趟的最后一个
	int t ;
	for (p = a; p < a + n - 1; p++)//循环趟数
	{
		for (q = a; q < end; q++)//循环次数
		{
			if (*q < *(q + 1))
			{
				t = *q;
				*q = *(q + 1);
				*(q + 1) = t;
			}
		}
		end--;
	}
	for (p = a; p < a + n; p++)
	{
		printf("%d ", *p);
	}
	printf("\n");
	system("pause");
	return 0;
}
#endif

