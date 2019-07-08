//1. µœ÷strcat

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

char *my_strcat(char *dst, const char *src)
{
	assert(dst);
	assert(src);
	char *cat = dst;
	while (*dst != '\0')
	{
		dst++;
	}
	while ((*dst++ = *src++) != '\0');
	return cat;
}

int main2()
{
	char a[20] = "hello";
	char *p = " bit";
	char *cat = my_strcat(a, p);
	printf("%s\n", cat);
	system("pause");
	return 0;
}

