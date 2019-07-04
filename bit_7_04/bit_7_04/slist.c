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
	SListNode * newdata = (SListNode *)malloc(sizeof(SListNode));

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
	newdata->_next = cur->_next;
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

void SListReverse(SList* plist)
{//反转一个单链表（法一）
	assert(plist->_head);
#if 0
	SListNode * tmp = plist->_head->_next;
	SListNode * cur = plist->_head;
	while (tmp)
	{
		cur->_next = tmp->_next;
		tmp->_next = plist->_head;

		plist->_head = tmp;
		tmp = cur ->_next;
	}
#elif 0
//（法二）
	SList * reve = (SList *)malloc(sizeof(SListNode));
	SListInit(reve);
	SListNode *cur;
	for (cur = plist->_head; cur; cur = cur->_next)
	{
		SListPushFront(reve, cur->_data);
	}
	SListDestory(plist);
	plist->_head = reve->_head;
#else
	//（法三）
	SListNode * tmp = plist->_head->_next;		//记录next
	SListNode * cur = plist->_head;
	cur->_next = NULL;	//断链，将头结点和它的next断开，有tmp记录，所以能找到
	while (tmp)	//每次循环都要完成断链，然后和旧头重新成链的过程，当旧链断链结束（tmp为空）跳出循环
	{
		plist->_head = tmp;	//换新头，tmp位置会成为新的头，旧头成为它的第一个节点
		tmp = tmp->_next;	//记录下次循环中tmp的位置，因为tmp 在这次循环中已经用完了，所以而且后面马上就要断链，所以要在这里记录
		plist->_head->_next = cur;	//断链，与旧头形成新链
		cur = plist->_head;	//记录旧头的位置，方便下次循环成链
	}
#endif
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



