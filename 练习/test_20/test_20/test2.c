#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

#if 0
int fun(int x)
{
	int count = 0;
	while (x)
	{
		count++;
		x = x&(x - 1);
	}
	return count;
}

int main()
{
	printf("%d\n", fun(2019));
	system("pause");
	return 0;
}
#endif

#if 0
int Func(int a)
{
	int b = 0;
	static int c = 3;
	a = c++, b++;
	return(a);
}

int main()
{
	int a = 2, i, k;
	for (i = 0; i < 2; i++)
	{
		k = Func(a++);
	}
	printf("%d\n", k);
	system("pause");
	return 0;
}
#endif

int main()
{
	int s = 0, n;
	for (n = 0; n < 4; n++)
	{
		switch (n)
		{
		default:s += 4;
		case 1:s += 1;
		case 2:s += 2;
		case 3:s += 3;
		}
	}
	printf("%d\n", s);
	system("pause");
	return 0;
}