#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main12()
{
	//printf("%d\n", sizeof(long double));
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("a=%d,b=%d,c=%d\n", a, b, c);
	printf("a=%x,b=%x,c=%x\n", a, b, c);
	printf("a=%u,b=%u,c=%u\n", a, b, c);
	system("pause");
	return 0;
}

