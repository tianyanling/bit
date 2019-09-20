#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

#define F(X,Y)((X)+(Y))
int main1()
{
#if 0
	char a[20];
	char *p1 = (char *)a;
	char *p2 = (char *)(a + 5);
	int  n = p2 - p1;
	printf("n=%d\n", n);
#endif

#if 0
	int a = 3, b = 4;
	printf("%d\n", F(a++, b++));
#endif

#if 0
	int x;
	x = 5 > 1 + 2 && 2 || 2 * 4 < 4 - !0;
	printf("x=%d\n", x);
#endif

#if 0
	int i = 1;
	int sum = 0;
	while (i < 10)
	{
		sum = sum + 1;
		i++;
	}
	printf("i=%d,sum=%d\n", i, sum);
#endif
	system("pause");
	return 0;
}