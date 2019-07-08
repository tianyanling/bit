#ifndef _SEQLIST_H_
#define _SEQLIST_H_

#define QUEUENUM 5

typedef int DataType;
typedef int size_t;

typedef struct
{
	DataType _data[QUEUENUM];
	DataType * _head;
	DataType * _tail;
	size_t _size;
}Dequeue;

void dequeueInit(Dequeue * qu);
int dequeueEmpty(Dequeue * qu);
DataType dequeuePush(Dequeue *qu, DataType x);

#endif
