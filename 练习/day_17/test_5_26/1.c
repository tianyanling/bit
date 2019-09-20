//1.ģ��ʵ��strncpy

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

char *my_strncpy(char *dst, const char *src, size_t count)
{
	assert(dst);
	//���ã���������������ش�������ֹ����ִ��
	//assert(int expression)	������ʽexpression
	assert(src);
	assert(count > 0);
	char *cpy = dst;
	while (count--)
	{
		*dst++ = *src++;
	}
	return cpy;
}

int main1()
{
	char a[20] = "abcdefghjdncjd";
	char *p = "123445155";
	int count = 0;
	char *ret = my_strncpy(a, p, 5);//12344fghjdncjd
	printf("%s\n", ret);

	system("pause");
	return 0;
}