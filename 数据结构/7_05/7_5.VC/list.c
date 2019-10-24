#define _CRT_SECURE_NO_WARNINGS 1
//双向链表
#include"list.h"

void ListInit(List* plist)
//初始化
{
	plist->_head = (ListNode *)malloc(sizeof(ListNode));
	memset(&plist->_head->_data, 0, sizeof(LTDataType));//数据清零
	plist->_head->_next = plist->_head->_prev = plist->_head;//下一个和上一个都没有，故都指向自己，即为初始化
}

void ListPushFront(List* plist, LTDataType x)
//头插，相当于单链表的后插
{
	ListNode *cur = (ListNode *)malloc(sizeof(ListNode));
	cur->_data = x;

	cur->_next = plist->_head->_next;//头结点的下一个指针域就是新插进来那个节点的下一个指针域，此时头结点与之前未插入结点的那个结点已经断开
	plist->_head->_next = cur;//此时头结点的下一个指针就指向新插进来的这个结点
	cur->_prev = plist->_head;//新插入的结点的前一个指针就指向了头结点
	if (plist->_head->_prev == plist->_head)//如果头结点的前一个指针域是头结点自己，那么头插进来的那个结点就是头结点的前一个指针域，
		//如果头结点的前一个指针域不是头结点自己，那么再头插进来结点，头结点的前一个指针域也不会发生变化
	{
		plist->_head->_prev = cur;
	}
}

void ListPushBack(List* plist, LTDataType x)
//后插
{
	ListNode *cur = (ListNode *)malloc(sizeof(ListNode));
	cur->_data = x;

	plist->_head->_prev->_next = cur;//头结点的前一个结点（在未插入新结点时）的下一个指针域指向新插入的结点
	cur->_prev = plist->_head->_prev;//将头结点的前一个指针指向的结点变成新插入结点的前一个指针指向的结点
	plist->_head->_prev = cur;//此时头结点的前一个指针指向的结点为新插入的结点
	cur->_next = plist->_head;//此时新插入的结点的下一个指针指向头结点

}

void ListPopFront(List* plist)
//头删，即删除head的后一个结点
{
	ListNode *tmp = plist->_head->_next;//tmp即为要删除的结点

	if (tmp !=plist->_head)//链表中只有一个头结点时，不进行此操作
	{
		tmp->_prev->_next = tmp->_next;//本来head的后一个指针指向的是tmp，当把tmp删除后，即指向tmp的下一个结点
		tmp->_next->_prev = tmp->_prev;//tmp的下一个结点的前一个指针本来指向tmp，当把tmp删除后，即指向tmp的前一个结点
		free(tmp);
	}
}

void ListPopBack(List* plist)
//后删，即删除head的前一个结点
{
	ListNode *tmp = plist->_head->_prev;
	if (tmp != plist->_head)
	{
		tmp->_prev->_next = tmp->_next;
		tmp->_next->_prev = tmp->_prev;
		free(tmp);
	}
}

void ListPrint(List* plist)
{
	ListNode *cur;
	printf("head<-->");
	for (cur = plist->_head->_next; cur != plist->_head; cur = cur->_next)//带头双向循环链表的遍历结构
	{
		printf("%d<-->", cur->_data);
	}
	printf("head\n");
}
void ListDestory(List* plist)
{
	ListNode *tmp = plist->_head->_prev;
	while(tmp != plist->_head)
	{
		tmp->_prev->_next = tmp->_next;
		tmp->_next->_prev = tmp->_prev;
		free(tmp);
		tmp = plist->_head->_prev;
	}
	free(plist->_head);
	plist->_head = NULL;
}