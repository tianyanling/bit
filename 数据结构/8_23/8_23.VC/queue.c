#define _CRT_SECURE_NO_WARNINGS 1

#include"queue.h"
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

void QueueInit(Queue* plist)
{
	assert(plist);

	plist->_head = NULL;
	plist->_rear = NULL;
}

int QueueIsEmpty(Queue * plist)
{
	return plist->_head == NULL;//头指针为空，即队列为空
}

void QueuePush(Queue* plist, QuDataType x)
{
	assert(plist);

	QueueNode * cur = (QueueNode *)malloc(sizeof(QueueNode));//申请一个动态空间
	cur->_data = x;
	cur->_next = NULL;

	if (QueueIsEmpty(plist))
	{
		plist->_head = plist->_rear = cur;
		return;
	}

	plist->_rear->_next = cur;
	plist->_rear = cur;
}

void QueuePop(Queue* plist)
{
	assert(plist);

	QueueNode * tmp;
	if (plist->_head)
	{
		tmp = plist->_head;
		plist->_head = tmp->_next;
		free(tmp);
	}
}

void QueueDestory(Queue* plist)
{
	assert(plist);

	QueueNode *tmp;
	while (plist->_head)
	{
		tmp = plist->_head;
		plist->_head = plist->_head->_next;
		free(tmp);
	}
}

QuDataType QueueTop(Queue* plist)
{
	if (QueueIsEmpty(plist))
	{
		return (QuDataType)0;
	}
	return plist->_head->_data;
}



