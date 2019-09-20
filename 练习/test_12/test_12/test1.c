#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

#if 0
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10};
	/*a[0] = 1;
	a[0] = 5 * 2;
	a[10] = 2;
	a[1] = a[2] * a[0];*/
	printf("%d\n", a[9]);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int *p = a;
	int i=0;
	/*a[p - a];
	*(&a[i]);
	p[i];
	a[10];*/
	printf("%d\n", a[10]);
	printf("%d\n", p[i]);
	printf("%d\n", a[p - a]);
	printf("%d\n", *(&a[i]));
	system("pause");
	return 0;
}
#endif