#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include "seqList.h"

int main()
{
	SeqList test;

	SeqListInit(&test, 10);//±ØÐë´«µØÖ·

	SeqListPushBack(&test,1);
	SeqListPushBack(&test, 2);
	SeqListPushBack(&test, 3);
	SeqListPushBack(&test, 4);
	SeqListPushBack(&test, 5);
	SeqListPushBack(&test, 6);
	SeqListPushBack(&test, 7);
	SeqListPushBack(&test, 8);
	SeqListPushBack(&test, 9);
	SeqListPushBack(&test, 10);

	SeqListDestory(&test);
	system("pause");
	return 0;
}