//ָ��
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
//������ *ָ����������������ǵ�ǰָ����ָ����������ͣ�
/*
int *p;	��ָ��
int **p;		˫ָ��
int (*p2)[3];	����ָ��
int *p3[4];	ָ������
int (*p4)(int,int);	����ָ��
int *p5(int,int);	ָ�뺯��
int (*p6[3])(int,int);		����ָ������
�������ȿ��ұ��ٿ�����ٿ��ұߣ��ȿ���д�����
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
	//int *p = NULL;//Ұָ����ָָ�������ڴ��ָ�루��û�кϷ����ڴ�ռ䣩
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
	int *p = (int *)a;//����������������Ԫ�صĵ�ַ
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
	int *p = (int*)(&a + 1);//��ʾ��a ����һ��������
	//int *p=a+1;//��ʾ��a+1�ĵ�ַ��p
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
{//����ʵ��ð������
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
	for (p = a; p < a+10; p++)//Ч�ʸߣ�ǰ����Ч��һ��
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
{//ָ��ʵ��ð������
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
	int *p = a, *q = a + 1, *end = a + n - 1;//p��ʾ����,end��ʾ��һ�˵����һ��
	int t ;
	for (p = a; p < a + n - 1; p++)//ѭ������
	{
		for (q = a; q < end; q++)//ѭ������
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

