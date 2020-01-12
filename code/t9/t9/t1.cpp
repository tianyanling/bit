//从头到尾打印链表
//https://www.nowcoder.com/practice/d0267f7f55b3412ba93bd35cfa8e8035?tpId=13&tqId=11156&tPage=1&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
#include<iostream>
#include<vector>
#include<algorithm>
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

vector<int> printListFromTailToHead(ListNode* head)
{
	vector<int> ret;

	while (head != nullptr)
	{
		ret.push_back(head->val);
		head = head->next;
	}

	reverse(ret.begin(),ret.end());

	return ret;
}

int main1()
{
	
	system("pause");
	return 0;
}