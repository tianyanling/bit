//shard_ptr
#include<iostream>
#include<memory>
using namespace std;
/*
struct ListNode
{
	int _data;
	shared_ptr<ListNode> _prev;
	shared_ptr<ListNode> _next;

	~ListNode() 
	{ 
		cout << "~ListNode()" << endl; 
	}
};

int main6()
{
	shared_ptr<ListNode> node1(new ListNode);
	shared_ptr<ListNode> node2(new ListNode);

	cout << node1.use_count() << endl;
	cout << node2.use_count() << endl;

	node1->_next = node2;
	node2->_prev = node1;

	//node2->_next = node2;
	// node1->_prev = node2;

	cout << node1.use_count() << endl;
	cout << node2.use_count() << endl;
	system("pause");
	return 0;
}
*/