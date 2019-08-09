#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int replace(char arr[])
{
	char *ret = arr;
	int count = 0;//计算有几个空格
	int newlen = 0;//新字符串的长度
	int oldlen = 0;//原来字符串的长度
	char *q = arr;
	char * r;
	assert(arr != NULL);
	while (*arr != '\0')
	{
		if (*arr == ' ')
		{
			count++;
		}
		oldlen++;
		arr++;
	}

	newlen = oldlen + 2 * count;
	q = arr + oldlen - 1;
	r = arr + newlen - 1;
	while (q != r)
	{
		if (*q == ' ')
		{
			*r-- = '0';
			*r-- = '2';
			*r-- = '%';
		}
		else
		{
			*r = *q;
			r--;
		}
		q--;
	}
	return ret;
}

int main()
{
	char arr[20] = "abc defgx yz";
	printf("%s\n", replace(arr));
	system("pause");
	return 0;
}