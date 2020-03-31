#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main4()
{
	int money, year;
	double rate;
	double sum = 0.0;
	scanf("%d%d%lf", &money, &year, &rate);
	sum = money*(pow((1 + rate), (double)year));
	printf("sum=%7.2f\n", sum);
	system("pause");
	return 0;
}