#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

#if 0
int main()
{
	int a = 2, *p1, **p2;
	p2 = &p1;
	p1 = &a;
	a++;
	printf("%d,%d,%d\n", a, *p1, **p2);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int k, j, s;
	for (k = 2; k < 6; k++, k++)
	{
		s = 1;
		for (j = k; j < 6; j++)
		{
			s += j;
		}
	}
	printf("%d\n", s);
	system("pause");
	return 0;
}
#endif

int main()
{
	int arr[] = { 6, 7, 8, 9, 10 };
	int *ptr = arr;
	*(ptr++) += 123;
	printf("%d,%d\n", *ptr, *(++ptr));
	system("pause");
	return 0;
}