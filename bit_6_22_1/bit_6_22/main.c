// 顺序表的动态存储

#include "seqList.h"

int main()
{
	SeqList test;

	SeqListInit(&test, 10);//必须传地址

	SeqListPushBack(&test, 1);
	SeqListPushBack(&test, 2);
	SeqListPushBack(&test, 3);
	SeqListPushBack(&test, 4);
	SeqListPushBack(&test, 5);
	SeqListPushBack(&test, 6);
	SeqListPushBack(&test, 7);
	SeqListPushBack(&test, 8);
	SeqListPushBack(&test, 9);

	SeqListPopFront(&test);
	SeqListPopBack(&test);

	SeqListInsert(&test, 1, 10);

	SeqListErase(&test, 6);

	SeqListRemove(&test, 8);

	SeqListModify(&test, 2, 12);

	SeqListBubbleSort(&test);

	printf("%d\n", SeqListBinaryFind(&test, 6));

	SeqListPrint(&test);

	SeqListDestory(&test);
	system("pause");
	return 0;
}
