#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int my_strlen(const char *p)
{
	if (NULL != p)
	{
		if (*p == '\0')
		{
			return 0;
		}
		else
		{
			return (1 + my_strlen(p+1));
		}
	}
}

int main()
{
	char *p = "abcdefgh";
	printf("%d", my_strlen(p));
	system("pause");
	return 0;
}