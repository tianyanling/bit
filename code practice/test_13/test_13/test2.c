#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

#if 0
#define sum(a,b,c) a+b+c

int main()
{
	int i = 3;
	int j = 2;
	printf("%d\n", i*sum(i, (i + j), j));
	system("pause");
	return 0;
}
#endif

#if 0
int f(int n)
{
	static int i = 1;
	if (n >= 5)
	{
		return n;
	}
	n = n + i;
	i++;
	return f(n);
}

int main()
{
	printf("%d\n", f(1)); 
	system("pause");
	return 0;
}
#endif

int func()
{
	int i, j, k=0;
	for (i = 0, j = -1; j = 0; i++, j++)
	{
		k++;
	}
	return k;
}

int main()
{
	printf("%d\n", (func()));
	system("pause");
	return 0;
}