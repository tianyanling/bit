#define _CRT_SECURE_NO_WARNINGS 1

#include"slist.h"

void SListInit(SList* plist)
{
	plist->_head = NULL;
}

void SListPushFront(SList* plist, SLTDataType x)
//头插法
{
	assert(plist);

	SListNode * cur = (SListNode *)malloc(sizeof(SListNode));
	cur->_data = x;
	cur->_next = plist->_head;
	plist->_head = cur;
}

void SListPopFront(SList* plist)
//头删法
{
	assert(plist);

	SListNode * tmp;
	if (plist->_head)
	{
		tmp = plist->_head;
		plist->_head = tmp->_next;
		free(tmp);
	}
}

void SListPrint(SList* plist)
{//打印
	assert(plist);

	SListNode *cur;
	for (cur = plist->_head; cur; cur = cur->_next)
	{
		printf("%d->", cur->_data);
	}
	printf("NULL\n");
}

SListNode* SListFind(SList* plist, SLTDataType x)
{//查找一个链表中的元素pos
	assert(plist);

	SListNode * cur;

	for (cur = plist->_head; cur; cur = cur->_next)
	{
		if (cur->_data == x)
		{
			return cur;
		}
	}
	return NULL;
}

void SListInsertAfter(SListNode* pos, SLTDataType x)
// 在pos的后面进行插入
{
	assert(pos);

	SListNode * cur = (SListNode *)malloc(sizeof(SListNode));
	cur->_data = x;
	cur->_next = pos->_next;
	pos->_next = cur;
}

void SListInsertFront(SList* plist, SLTDataType x, SLTDataType src)
// 在pos的前面进行插入（尽量不使用）
{
	assert(plist);

	SListNode * cur;
	SListNode * newdata=(SListNode *)malloc(sizeof(SListNode));

	if (plist->_head->_data == x)
	{
		SListPushFront(plist, src);
		return;
	}

	for (cur = plist->_head; cur->_next; cur = cur->_next)
	{
		if (cur->_next->_data == x)
		{
			break;
		}
	}
	newdata->_data = src;
	newdata->_next = cur ->_next;
	cur->_next = newdata;
}

void SListEraseAfter(SListNode* pos)
//删除pos后的一个元素
{
	assert(pos);

	SListNode * tmp = pos->_next;

	pos->_next = tmp->_next;
	free(tmp);
}

void SListDestory(SList* plist)
{
	assert(plist);

	SListNode *tmp;
	while (plist->_head)
	{
		tmp = plist->_head;
		plist->_head = plist->_head->_next;
		free(tmp);
	}
}

SListNode* BuySListNode(SLTDataType x);
void SListRemove(SList* plist, SLTDataType x);
void TestSList();


