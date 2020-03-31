#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main2()
{
	char c;
	int tmp;
	c = getchar();
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		tmp = c;
		printf("ASCII=%d\n", tmp);
	}	
	system("pause");
	return 0;
}