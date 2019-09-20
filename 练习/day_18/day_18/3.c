//3.实现strstr 

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

char * my_strstr(const char *dest, const char *src)
{
	char* start = (char*)dest;//在这里需要强制类型转换成char*
	char* substart = (char*)src;
	char* cp = (char*)dest;//cp就是用来保存首地址的
	assert(dest != NULL);
	assert(src != NULL);
	while (*cp)
	{
		start = cp;
		while (*start != '\0' && *substart != '\0' && *start == *substart)
		{
			start++;
			substart++;
		}
		if (*substart == '\0')
		{
			return cp;
		}
		substart = (char*)src;
		cp++;//cp++可以得到原起始位置的下一个位置
	}
	return NULL;
}

int main3()
{
	char a[20] = "abbbcdef";
	char b[10] = "bbcde";
	printf("%s\n", my_strstr(a, b));
	system("pause");
	return 0;
}