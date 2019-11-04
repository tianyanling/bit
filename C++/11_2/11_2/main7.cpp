//weak_ptr,node1->_next = node2;和node2->_prev = node1;时weak_ptr的_next和_prev不会增加
//node1和node2的引用计数
//不是真正的指针，只保存一个指针的值
#include<iostream>
#include<memory>
using namespace std;

struct ListNode
{
	int _data;
	weak_ptr<ListNode> _prev;
	weak_ptr<ListNode> _next;

	~ListNode()
	{
		cout << "~ListNode()" << endl;
	}
};

int main7()
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