#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

#if 0
int main()
{
	char a[] = "123456789", *p = a;
	int i = 0;
	while (*p)
	{
		if (i % 2 == 0)
			*p = '!';
		i++;
		p++;
	}
	puts(a);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	char str[] = "ABCDEFG";
	char *p1, *p2;
	p1 = "abcd";
	p2 = "efgh";
	strcpy(str + 1, p2 + 1);
	strcpy(str + 3, p1 + 3);
	printf("%s\n", str);
	system("pause");
	return 0;
}
#endif

#if 0
int fun(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] == s2[i] && s2[i] != '\0')
		i++;
	return(s1[i] == '\0' && s2[i] == '\0');
}
#endif

