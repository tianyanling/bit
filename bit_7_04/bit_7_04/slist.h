#ifndef _SEQLIST_H_
#define _SEQLIST_H_


#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/*
������α���
��1�����򲻴�ͷ
for(cur = head; cur; cur = cur->next)
{
cur;
}

��2��˫���ͷ
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
// ��pos�ĺ�����в���
void SListInsertFront(SList* plist, SLTDataType x, SLTDataType src);
// ��pos��ǰ����в���
void SListEraseAfter(SListNode* pos);
void SListReverse(SList* plist);
void SListRemove(SList* plist, SLTDataType x);
void SListPrint(SList* plist);
void TestSList();

#endif