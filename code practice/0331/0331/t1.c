#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b; 
	*b = tmp;
	return;
}

int main1()
{
	int a, b;
	char c = ',';
	scanf("%d%c%d",&a,&c,&b);

	swap(&a, &b);

	printf(" %d,%d\n", a, b);
	system("pause");
	return 0;
}