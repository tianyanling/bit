//3.Ä£ÄâÊµÏÖstrncmp

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

int my_strncmp(const char *str1, const char *str2, size_t count)
{
	assert(str1);
	assert(str2);
	assert(count > 0);
	const char *p = str1;
	const char *q = str2;
	while (*p != '\0' && *q != '\0' && (count--))
	{

		if (*p == *q)
		{
			p++;
			q++;

		}
		else if (*p > *q)
		{
			return 1;
		}
		else
		{
			return -1;
		}

	}
	if (*p != '\0')
	{
		return 1;

	}
	if (*q != '\0')
	{
		return -1;
	}
}

int main()
{
	char *p = "12345abcd";
	char *q = "12645sbce";
	int ret = my_strncmp(p, q, 5);
	printf("%d\n", ret);
	system("pause");
	return 0;
}