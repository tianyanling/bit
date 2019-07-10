#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include"dequeue.h"

int main()
{
	Dequeue test;
	dequeueInit(&test);
	printf("%d\n", dequeuePush(&test, 1));
	printf("%d\n", dequeuePush(&test, 2));
	printf("%d\n", dequeuePush(&test, 1));
	printf("%d\n", dequeuePush(&test, 1));

	system("pause");
	return 0;
}