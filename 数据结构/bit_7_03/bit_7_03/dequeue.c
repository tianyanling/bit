#include"dequeue.h"

void dequeueInit(Dequeue * qu)
{
	qu->_head = qu->_tail = qu->_data;
	qu->_size = 0;
}

DataType dequeuePush(Dequeue *qu, DataType x)
{
	*qu->_tail = x;
	if (qu->_tail + 1 == qu->_head || (qu->_tail + 1 - qu->_data == QUEUENUM && qu->_head == qu->_data))
	{
		return -1;
	}
	qu->_tail++;
	if (qu->_tail - qu->_data == QUEUENUM)
	{
		qu->_tail = qu->_data;
	}
	qu->_size++;
	return 0;
}
//
//DataType dequeuePop(Dequeue *qu, DataType x)
//{
//	if
//}

DataType dequeueFront(Dequeue * qu)
{
	return *qu->_head;
}

DataType dequeueBack(Dequeue *qu)
{
	if (qu->_tail == qu->_data)
	{
		return qu->_data[QUEUENUM - 1];
	}
	return qu->_tail[-1];
}

int dequeueEmpty(Dequeue *qu)
{
	return qu->_head == qu->_tail;
}

size_t dequeueSize(Dequeue *qu)
{
	return qu->_size;
}
