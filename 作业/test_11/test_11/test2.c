#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

#if 0
int main()
{
	unsigned char a = 0xA5;
	unsigned char b = ~a >> 4 + 1;
	//printf("%x\n", a);
	printf("%d\n", b);
	system("pause");
	return 0;
}
#endif

int main()
{
	const int i = 0;
	int *j = (int *)&i;
	*j = 1;
	printf("%d,%d\n", i, *j);
	system("pause");
	return 0;
}
