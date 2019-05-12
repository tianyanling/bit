//2. ¼ÆËã1/1-1/2+1/3-1/4+1/5 ¡­¡­ + 1/99 - 1/100 µÄÖµ
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main2()
{
	int i, j;
	double a=0, b=0, sum = 0.0;
	for (i = 1; i <= 50; i++)
	{
		a = a + 1.0 / (2*i - 1);
	}
	for (j = 1; j <= 50;j++)
		{
			b = b + 1.0 / (2 * j);
		}
		sum = a - b;
	printf("%f", sum);
	system("pause");
	return 0;
}