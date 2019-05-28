//1.实现strcpy 

//实现strcpy

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

char *my_strcpy(char *dst, const char *src)
{
	assert(dst);
	assert(src);
	char *cpy = dst;
	while (*src != '\0')
	{
		*dst = *src;
		*dst++;
		*src++;
	}
	*dst = *src;
	return cpy;
}

int main()
{
	char a[20] = "abcde";
	char *p = "123";
	char *cpy = my_strcpy(a, p);
	printf("%s\n", cpy);
	system("pause");
	return 0;
}