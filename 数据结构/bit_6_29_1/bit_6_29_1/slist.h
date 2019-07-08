#ifndef _SEQLIST_H_
#define _SEQLIST_H_


#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/*
链表如何遍历
（1）单向不带头
for(cur = head; cur; cur = cur->next)
{
cur;
}

（2）双向带头
for(cur = head->next; cur != head; cur =cur->next)
{
cur;
}
*/

typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType _data;
	struct SListNode* _next;
}SListNode;

typedef struct SList
{
	SListNode* _head;
}SList;

void SListInit(SList* plist);
void SListDestory(SList* plist);
SListNode* BuySListNode(SLTDataType x);
void SListPushFront(SList* plist, SLTDataType x);
void SListPopFront(SList* plist);
SListNode* SListFind(SList* plist, SLTDataType x);
void SListInsertAfter(SListNode* pos, SLTDataType x);
// 在pos的后面进行插入
void SListInsertFront(SList* plist, SLTDataType x, SLTDataType src);
// 在pos的前面进行插入
void SListEraseAfter(SListNode* pos);
void SListReverse(SList* plist);
void SListRemove(SList* plist, SLTDataType x);
void SListPrint(SList* plist);
void TestSList();

#endif