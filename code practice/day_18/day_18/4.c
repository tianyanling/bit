//4.ʵ��strchr 

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
		printf("�ַ������޲�ѯ��ĸ");
	}
	else
	{
		printf("�ַ������в�ѯ��ĸ��λ��Ϊ%d\n",ret-str);
	}

	getchar();
	system("pause");
	return 0;
}

