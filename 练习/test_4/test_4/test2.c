#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main2(int argc,char *argv[])
{
	struct tagTest1
	{
		short a;
		char d;
		long b;
		long c;
	};

	struct tagTest2
	{
		long b;
		short c;
		char d;
		long a;
	};

	struct tagTest3
	{
		short c;
		long b;
		char d;
		long a;
	};

	struct tagTest1 stT1;
	struct tagTest2 stT2;
	struct tagTest3 stT3;

	printf("%d,%d,%d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
	system("pause");
	return 0;
}