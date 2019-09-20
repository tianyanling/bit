#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

#if 0
int main()
{
	unsigned int a = 0xFFFFFFF7;
	unsigned char i = (unsigned char)a;
	char *b = (char *)&a;
	printf("%08x,%08x", i, *b);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int j = 4;
	int i = j;
	for (; i <= 2 * j; i++)
	{
		switch (i / j)
		{
		case 0:
		case 1:
			printf("*");
			break;
		case 2:
			printf("#");
		}
	}
	system("pause");
}
#endif

#if 0
int main()
{
	int x = 1, y = 012;
	//printf("%d\n", y*x++);
	printf("%d", y);
	system("pause");
	return 0;
}
#endif