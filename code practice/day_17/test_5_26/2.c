//2.Ä£ÄâÊµÏÖstrncat 

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

char *my_strncat(char *dst, const char *src, size_t count)
{
	assert(dst);
	assert(src);
	char *cat = dst;
	int i = 0;
	while (*dst != '\0')
	{
		dst++;
	}
	for (i=0; i <count; i++)
	{
		*dst = *src;
		dst++;
		*src++;
	}
	return cat;
}

int main2()
{
	char a[30] = "hello"; 
	char b[20] = " bit and world";
	char *ret = my_strncat(a, b, 14);
	printf("%s\n", ret);
	system("pause");
	return 0;
}