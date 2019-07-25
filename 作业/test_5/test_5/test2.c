#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#define CIR(r) r*r

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

unsigned long g_ulGlobal = 0;
void GlobalInit(unsigned long ulArg)
{
	ulArg  = 0x01;
	return;
}
int main()
{
	//printf("fun(2017)=%d\n", fun(2019));

#if 0
	int a = 1;
	int b = 2;
	int t;
	t = CIR(a + b);
	printf("%d\n", t);
#endif

	GlobalInit(g_ulGlobal);
	printf("%lu\n", g_ulGlobal);
	system("pause");
	return 0;
}