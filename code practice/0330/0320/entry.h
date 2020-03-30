#pragma once
#include<iostream>
using namespace std;

struct ListNode {
	int val;

	struct ListNode *next;
	ListNode(int x) :
		val(x), 
		next(nullptr) 
	{

	}
};

ListNode* MeetingNode(ListNode* pHead)
{
	if (pHead == nullptr)
	{
		return nullptr;
	}

	ListNode* pSlow = pHead;
	if (pSlow->next == nullptr)
	{
		return nullptr;
	}

	ListNode* pFast = pSlow->next;
	if (pSlow != nullptr && pFast != nullptr)
	{
		if (pSlow == pFast)
		{
			return pFast;
		}

		pSlow = pSlow->next;
		pFast = pFast->next;

		if (pFast != nullptr)
		{
			pFast = pFast->next;
		}
	}
	return nullptr;
}

ListNode* EntryNodeOfLoop(ListNode* pHead)
{
	ListNode* meetingnode = MeetingNode(pHead);//环中任意节点
	if (meetingnode == nullptr)
	{
		return nullptr;
	}

	//计算环中的节点个数
	int count = 1;
	ListNode* node1 = meetingnode;
	while (node1->next != meetingnode)
	{
		node1 = node1->next;
		count++;
	}

	node1 = pHead;
	for (int i = 0; i < count; i++)
	{
		node1 = node1->next;
	}

	ListNode* node2 = pHead;
	while (node1 != node2)//若两个指针相遇，说明此处为环入口节点 
	{
		node1 = node1->next;
		node2 = node2->next;
	}
	return node1;
}