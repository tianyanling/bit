#include<stdio.h>
#include<stdlib.h>
#include"seqlist.h"

int main()
{
	SeqList test;
	SeqListInit(&test, 10);

	SeqListPushBack(&test, 1);
	SeqListPushBack(&test, 2);
	SeqListPushBack(&test, 3);
	SeqListPushBack(&test, 4);
	SeqListPushBack(&test, 5);
	SeqListPushBack(&test, 6);
	SeqListPushBack(&test, 7);

	SeqListPopBack(&test);

	SeqListPushFront(&test, 10);
	SeqListPushFront(&test, 8);
	SeqListPushFront(&test, 23);

	SeqListPopFront(&test);
	
	SeqListInsert(&test, 6, 122);

	SeqListErase(&test, 7);

	SeqListRemove(&test, 122);

	SeqListModify(&test, 5, 67);

	SeqListBubbleSort(&test);

	SeqListBinaryFind(&test, 10);

	SeqListPrint(&test);

	system("pause");
	return 0;
}