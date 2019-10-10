//两个栈实现队列
#include<iostream>
#include<queue>
#include<stack> 
using namespace std;

void change(stack<int> *s1, stack<int> *s2)
{
	int i;
	for (i = 0; i < s1->size(); i++)
	{
		s2->push(s1->top());
		s1->pop();
	}
}

class MyQueue
{
	stack<int> *obj;
public:
	MyQueue() 
	{
		obj = new stack<int>;
	}

	void push(int x) 
	{
		obj->push(x);
	}

	int pop()
	{
		stack<int> *tmp = new stack<int>;
		change(obj, tmp);
		int p = tmp->top();
		tmp->pop();
		change(tmp, obj);
		return p;
	}

	int front() 
	{
		stack<int> *tmp = new stack<int>;
		change(obj, tmp);
		int p = tmp->top();
		change(tmp, obj);
		return p;
	}

	bool empty()
	{
		return obj->empty();
	}
};

int main()
{
	queue<int> q;
	q.push(2);
	q.push(4);
	q.push(6);
	cout << q.front() << endl;

	q.pop();
	cout << q.front() << endl;

	q.pop();
	cout << q.front() << endl;

	system("pause"); 
	return 0;
}
