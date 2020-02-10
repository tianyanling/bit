#include<iostream>
using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;

	ListNode(int x) :
		val(x), 
		next(NULL) 
	{
	}
}; 

ListNode* ReverseList(ListNode* pHead)
{
	if (pHead == NULL)
	{
		return NULL;
	}

	ListNode* head = pHead;
	pHead = pHead->next;
	head->next = NULL;
	while (pHead) 
	{
		ListNode *next = pHead->next;
		pHead->next = head;
		head = pHead;
		pHead = next;
	}
	return head;
}

int main()
{

	system("pause");
	return 0;
}