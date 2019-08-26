#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include"heap.h"

int omain()
{
	int data[10] = { 5,2,4,6,7,1,3,9,8,10 };
	Heap hp;

	//HeapInit(&hp, data, 10);
	//HeapPrint(&hp);

	//AdjustDown(&hp, 10);
	//HeapPrint(&hp);
	//HeapPush(&hp, 11);

	//HeapPrint(&hp);

	//HeapPop(&hp);
	//HeapPrint(&hp);

	//
	//HeapSort(&hp);
	//putchar('\n');
	//HeapPrints(&hp);

	//HeapDestory(&hp);

	HeapSortS(data, 10);
	system("pause");
	return 0;
}


