#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void GetMemory1(char *p)
{
	p = (char *)malloc(100);
}

char *GetMemory2(void)
{
	char p[] = "hello world";
	return p;
}

int main()
{
	/*char *str = NULL;
	GetMemory1(str);
	strcpy(str, "hello world");
	printf(str);*/

	char *str = NULL;
	str = GetMemory2();
	printf(str);

	//char a[] = "abcde";
	//printf("%d\n", strlen(a));//5
	//printf("%d\n", sizeof(a));//6
	system("pause");
	return 0;
}