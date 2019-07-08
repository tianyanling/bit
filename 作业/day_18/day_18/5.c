//5.实现strcmp

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

int my_strcmp(const char *str1, const char *str2)
{
	assert(str1 != NULL && str2 != NULL);
	int tmp;
	while ((tmp = *str1 - *str2) == 0 && *str2 != '\0')
	{
		str1++;
		str2++;
	}
	return tmp;
}

int main5()
{
	printf("%d\n", my_strcmp("ancd", "abcd"));
	system("pause");
	return 0;
}