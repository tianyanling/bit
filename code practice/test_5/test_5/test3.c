//有一张单链表，编写函数求倒数第k个结点
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#define ERROR 0
typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType _data;
	struct SListNode* _next;
}SListNode;

//创建一个单链表
SListNode CreateNode(int value)
{
	SListNode *pNode = newNode();
	pNode->_data = value;
	pNode->_data = NULL;
	return *pNode;
}

int GetNode(SListNode *l,int k)
{
	SListNode *p, *q;
	int i = 1;
	p = l->_next;
	q = l;
	while (p)
	{
		p = p->_next;
		++i;
		if (i > k)
		{
			q = q->_next;
		}
		if (q == l)
		{
			return ERROR;
		}
	}
	return q->_data;
}

int main()
{
	SListNode l;
	printf("%s\n", GetNode(*l,3));
	system("pause");
	return 0;
}