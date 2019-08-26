#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

#if 0
int main()
{
	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
	unsigned long *pulPtr;
	pulPtr = pulArray;
	*(pulPtr + 2) += 2;
	printf("%d,%d\n", *pulPtr, *(pulPtr + 2));
	system("pause");
	return 0;
}
#endif

#if 0
void main()
{
	char *szStr = "abcde";
	szStr += 2;
	printf("%lu\n", szStr);
	printf("%lu\n", &szStr[2]);
	system("pause");
	return;
}
#endif

#if 0
int main()
{
	int i;
	char acNew[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	for (i = 0; i < 10; i++)
	{
		acNew[i] = '0';
	}
	printf("%d\n", strlen(acNew));
	system("pause");
	return 0;
}
#endif