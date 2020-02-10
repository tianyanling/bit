#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

#if 0
int main()
{
	int a = 5;
	int *p = &a;
	int *q = &a;
	//a = (*p)*(*q);
	//printf("%d\n", a);
	//q = a;
	//printf("%d\n", q);
	a = p - q;
	printf("%d\n", a);
	//p = q;
	//printf("%d\n", p);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int x, y = 5, *p = &x;
	x = *p;
	//*p = &y;
	//x = &y;
	//x = y;
	system("pause");
	return 0;
}
#endif