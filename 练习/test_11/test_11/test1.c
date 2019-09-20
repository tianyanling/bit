#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int fun(char *s)
{
	char *p = s;
	while (*p != '\0')
	{
		p++;
	}
	return (p-s);
}

#if 0
int main()
{
	printf("%d\n", fun("goodbye"));
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int a[4] = { 0 };
	*a;
	a[0];
	a;
	//a++;
	system("pause");
	return 0;
}
#endif