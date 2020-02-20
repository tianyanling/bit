#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"

int main()
{
	List list;
	ListInit(&list);
	//ListPushBack(&list, 7);
	//ListPushBack(&list, 6);
	//ListPushBack(&list, 5);
	//ListPushBack(&list, 4);

	ListPushFront(&list, 7);
	ListPushFront(&list, 6);
	ListPushFront(&list, 5);
	ListPushFront(&list, 4);
	ListPopFront(&list);
	//ListPopBack(&list);
	ListPrint(&list);
	//ListDestory(&list);
	system("pause");
	return 0;
}