#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>


int my_strlen(int *p)
{
	if (NULL != p)
	{
		if (*p == '\0')
		{
			return 0;
		}
		else
		{
			return (1 + my_strlen(p + 1));
		}
	}
}

int main()
{
	char *p = "abcdefgh";
	int ret = my_strlen(p);
	printf("%d", ret);
	system("pause");
	return 0;
}