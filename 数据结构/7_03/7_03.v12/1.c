#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#define QUEUENUM 100

typedef int DataType;

typedef struct
{
	DataType _data[QUEUENUM];
	DataType * _head;
	DataType * _tail;
	size_t size;
}Dequeue;

void dequeueInit(Dequeue * qu)
{
	qu->_head = qu->_tail = qu->_data;
	qu->size = 0;
}

void dequeueEmpty(Dequeue * qu)
{
	qu->_head = qu->_tail;
	qu->size = 0;
}