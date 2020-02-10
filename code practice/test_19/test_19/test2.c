#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

#if 0
int main()
{
	int x = 6, n = 5;
	x += n++;
	printf("%d\n", x);
	system("pause");
	return 0;
}
#endif

int main()
{
	int x;
	x = 4;
	x += x *= x + x;
	printf("%d\n", x);   
	system("pause");
	return 0;
}