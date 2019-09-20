#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int a = 1;
void test()
{
	int a = 2;
	a += 1;
}

int main1()
{
#if 0
	int m, n;
	for (m = 0, n = -1; n = 0; m++, n++)
	{
		n++;
	}
#endif

#if 0
	test();
	printf("%d\n", a);
#endif

#if 0
	int y = 10;
	int x;
	x = y++;
	printf("x=%d,y=%d\n", x, y);
#endif

#if 1
	int i = 0;
	int j = 0;
	if ((++i > 0) || (++j > 0))
	{
		printf("i=%d,j=%d\n", i, j);
	}
#endif
	system("pause");
	return 0;
}