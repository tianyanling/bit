#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

int main3()
{
	int a = 1; 
	int b = 1; 
	int c = -2;

	float x1 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
	float x2 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);

	printf("x1=%.4lf\nx2=%.4lf\n", x1, x2);
	system("pause");
	return 0;
}