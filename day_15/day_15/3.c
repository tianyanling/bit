//3.模拟实现strcpy 
//strcpy的作用是将一个字符串的内容复制到另外一个字符数组中，包括字符串的终结符

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<assert.h>
#include<stdlib.h>
char * my_strcpy(char *dest, const char *src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char *ret = dest;
	while (*dest++ = *src++)
		//先进行了复制再进行了++，当赋值到终结符‘\0’时，不符合while的判断条件，退出循环
		//而此时已经将所有的内容复复制到字符数组中了
	{
		;
	}
	return ret;
}

int main3()
{
	char a[10];//必须给够足够大的空间，使其能将字符完全复制
	char *q = "bcd";
	printf("%s\n", my_strcpy(a, q));
	system("pause");
	return 0;
}