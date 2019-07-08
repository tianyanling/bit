//4.实现strchr 

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

char* my_strchr(char* str, char s)
{
	assert(str != NULL&&s != NULL);

	while (*str&&*str != s)
	{
		str++;
	}
	if (*str == s)
	{
		return str;
	}
	return NULL;
}

int main4()
{
	char* str = "hello bit";
	char c = 't';
	char* ret;

	ret = my_strchr(str, c);

	if (ret == NULL)
	{
		printf("字符串中无查询字母");
	}
	else
	{
		printf("字符串中有查询字母的位置为%d\n",ret-str);
	}

	getchar();
	system("pause");
	return 0;
}

