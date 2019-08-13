#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

#if 0
int main()
{
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int *p = a;
	printf("%d\n", *a);
	printf("%d\n", *p);
	printf("%d\n", a);
	printf("%d\n", a[p-a]);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int a[] = { 0, 2, 4, 6, 8, 10 };
	int *p = a + 1;
	printf("%d\n", *p);//2
	//printf("%d\n", *(p++));//2
	//printf("%d\n", *(++p));//4
	//printf("%d\n", *(p--));//2
	//printf("%d\n", *(--p));
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int c[] = { 1, 3, 5 };
	int *k = c + 1;
	printf("%d\n", *++k);
	system("pause");
	return 0;
}
#endif

#if 0
#define MA(X,Y) (X*Y)

int main()
{
	int i = 5;
	i = MA(i, i + 1) - 7;
	printf("%d\n", i);
	system("pause");
	return 0;
}
#endif