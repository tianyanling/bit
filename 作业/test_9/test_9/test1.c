#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void Fun(char str_arg[2])
{
	int m = sizeof(str_arg);
	int n = strlen(str_arg);
	printf("%d\n", m);
	printf("%d\n", n);
}

#if 0
int main(void)
{
	char str[] = "hello";
	Fun(str);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	printf("%d\n", 1 << 3 + 2);
	system("pause");
	return 0;
}
#endif

union X
{
	int x;
	char y[4];
}a;

#if 0
int main()
{
	a.x = 0x11223344;
	printf("%x\n", a.y[0]);
	printf("%x\n", a.y[1]);
	printf("%x\n", a.y[2]);
	printf("%x\n", a.y[3]);
	system("pause");
	return 0;
}
#endif

