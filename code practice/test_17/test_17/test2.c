#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

#if 0
void foo(int b[][3])
{
	++b;
	b[1][1] = 9;
}

int main()
{
	int a[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	foo(a);
	printf("%d", a[2][1]);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int x = 0, y = 0, z = 0;
	z = (x == 1) && (y = 2);
	printf("%d\n", y);
	printf("%d\n", x);
	printf("%d\n", z);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int i = 10;
	long long t = sizeof(i++);
	printf("%d\n", i);
	system("pause");
	return 0;
}
#endif