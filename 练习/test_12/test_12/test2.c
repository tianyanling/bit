#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

#if 0
int f(int x, int y)
{
	return(x&y) + ((x^y) >> 1);
}
int main()
{
	int result = f(2, 2);
	printf("%d\n", result);
	system("pause");
	return 0;
}
#endif

void fun(int x, int y, int *c, int *d)
{
	*c = x + y;
	*d = x - y;
}
 
int main()
{
	int a = 4, b = 3, c = 0, d = 0;
	fun(a, b, &c, &d);
	printf("%d,%d\n", c, d);
	system("pause");
	return 0;
}