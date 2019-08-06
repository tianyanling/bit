#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

#if 0
int main()
{
	char acX[] = "abc";
	char acY[] = { 'a', 'b', 'c'};
	char szX = "abc";
	char szY = "abc";
	printf("%d,%d\n", sizeof(acX), sizeof(acY));
	printf("%x,%x\n", &szX, &szY);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	char *str[3] = { "stra", "strb", "strc" };
	char *p = str[0];
	int i = 0;
	while (i < 3)
	{
		printf("%s ", p++);
		i++;
	}
	system("pause");
	return 0;
}
#endif

int main()
{
	int x[] = { 1, 2, 3, 4, 5, 6 };
	int *p = x;
	p += 2;
	printf("%d\n",*++p);
	//printf("%d\n", ++*p);
	//printf("%d\n", *p++);
	//p += 3;
	//printf("%d\n", *p);
	system("pause");
	return 0;
}
