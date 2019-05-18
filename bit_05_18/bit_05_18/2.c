//指针

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>

//int main()
//{
//	int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};	//int (*p)[4]
	//printf("%d,%d\n", a, *a);
	//printf("%d,%d\n", a, a + 1);
	//printf("%d,%d\n", *a, *a + 1);
	//printf("%d,%d\n", *(a + 1), a[1]);

	//printf("%d,%d,%d,%d,%d\n", **a, *(*a + 1),*(*(a+1+1)),*(*a+1+1),*(*(a+1)+3));
//
//	int(*p)[4];		//数组指针
//	int i, j;
//	p = a;
//	//方法一
//	for (p = a; p < a + 3; p++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%2d ", *(*p + j));
//		}
//		printf("\n");
//	}
//	//方法二
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%2d ", *(*(p + i) + j));//p[i][j]
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 7, 8, 12 };
//	int(*p)[4];	//数组指针			
//	int *q[3];//指针数组			//数组不能作为左值
//	int i,j;
//	p = arr;
//	for (i = 0; i < 3; i++)
//	{
//		q[i] = arr[i];
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			//printf("%d ", *(q[i] + j));
//			printf("%d ", *((q + i) + j));//不能q++,只能q+i
//		}
//		printf("\n");
//	}
//
//
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char *name[5] = { "lili", "zhangsan", "hsdjashbju", "aa", "ahsajha" };
//
//	system("pause");
//	return 0;
//}

//int main()
//{
	//int a = 5;
	//int *p = &a;
	//int **q = &p;
	//printf("%d,%d,%d\n", a, *p, **q);
//
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *q[5] = { &a[0], &a[1], &a[2], &a[3], &a[4] };
//	int **p=q;
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		//printf("%d ", *q[i]);
//		printf("%d ", **(q+i));
//	}
//	printf("\n");
//	for (p = q; p < q + 5; p++)
//	{
//		printf("%d ", **p);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}


 