#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#define MOD(x,y) x%y

int main()
{
#if 0
	int a = 13, b = 94;
	printf("%d\n", MOD(b, a + 4));
#endif

#if 1
	int x = 0;
	switch (++x)
	{
	case 0: ++x;
	case 1: ++x;
	case 2: ++x;
	}
	printf("%d\n", x);
#endif
	system("pause");
	return 0;
}