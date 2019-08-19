#ifndef _QUEUE_H_
#define _QUEUE_H_

#include"BTree.h"


typedef BTNode * QuDataType;

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
QuDataType QueueTop(Queue* plist);

#endif/*_QUEUE_H_*/