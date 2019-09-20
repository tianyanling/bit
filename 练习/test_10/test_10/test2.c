#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

char *mystring()
{
	char buffer[6] = { 0 };
	char *s = "Hello World!";
	for (int i = 0; i < sizeof(buffer) - 1; i++)
	{
		buffer[i] = *(s + i);
	}
	return buffer;
}

#if 0
int main()
{
	printf("%s\n", mystring());
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int i = 1;
	printf("%d,%d\n", sizeof(i++), i);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = (char)(-1 - i);
	}
	printf("%d\n", strlen(a));
	system("pause");
	return 0;
}
#endif
