#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int fun(int a, int b)
{
	if (a > b)
		return (a + b);
	else
		return (a-b);
}

int main()
{
#if 0
	int x = 3, y = 8, z = 6, r;
	r = fun(fun(x, y), 2 * z);
	printf("%d\n", r);
#endif

	system("pause");
	return 0;
}