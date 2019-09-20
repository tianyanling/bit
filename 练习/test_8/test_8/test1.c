#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main1()
{
#if 0
	char acX[] = "abcdefg";
	char acY[] = {'a','b','c','d','e','f','g'};
	printf("%d,%d\n", strlen(acX), strlen(acY));
#endif

#if 1
	char s[] = "\\123456\123456\t";
	printf("%d\n", strlen(s));
#endif
	system("pause");
	return 0;
}