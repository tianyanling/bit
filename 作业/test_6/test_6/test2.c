#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int f(int a)
{
	int b = 0;
	static int c = 3;
	a = c++, b++;
	return (a);
}

int x = 3;
void inc()
{
	static int x = 1;
	x *= (x + 1);
	printf("%d ", x);
	return;
}

int main()
{
#if 0
	int a = 2, i, k;
	for (i = 0; i < 2; i++)
	{
		k = f(a++);
	}
	printf("%d\n", k);
#endif

#if 1
	int i;
	for (i = 1; i < x; i++)
	{
		inc();
	}
#endif
	system("pause");
	return 0;
}