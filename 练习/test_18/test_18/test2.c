#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

#if 0
int main()
{
	double z;
	z = (10 / 4 * 4);
	printf("%f\n", z);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int a = 0;
	int b = 0;
	printf("%d\n", (a=2,b=5,a++,b++,a+b));
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int i, x, y;
	i = x = y = 0;
	do{
		++i;
		if (i % 2)
		{
			x += i;
			i++;
			y += i++;
		}
	} while (i <= 7);
	printf("%d %d %d", i, x, y);
	system("pause");
	return 0;
}
#endif