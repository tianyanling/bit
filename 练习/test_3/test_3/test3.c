#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main3()
{
	char acHello[] = "hello\0world";
	char acNew[15] = { 0 };
	strcpy(acNew,acHello);
	printf("%d\n", strlen(acNew));
	printf("%d\n", sizeof(acHello));
	system("pause");
	return 0;
}