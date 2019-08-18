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

typedef int QuDataType;
typedef struct QueueNode
{
	QuDataType _data;
	struct QueueNode* _next;
}QueueNode;

typedef struct Queue
{
	QueueNode* _head;
	QueueNode* _rear;
}Queue;

void QueueInit(Queue* plist);
void QueueDestory(Queue* plist);
void QueuePush(Queue* plist, QuDataType x);
void QueuePop(Queue* plist);
int QueueIsEmpty(Queue* plist);

#endif