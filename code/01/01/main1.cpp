#include<iostream>
using namespace std;

class TestBase
{
public:
	TestBase()
	{
		cout << "我是基类构造" << endl;
	}

	~TestBase()
	{
		cout << "我是基类析构" << endl;
	}
};

class Test : public TestBase
{
public:
	Test()
	{
		cout << "我是派生类构造" << endl;
	}

	~Test()
	{
		cout << "我是派生类析构" << endl;
	}

	void fun() 
	{
		cout << "我是派生类" << endl;
	}
};

int main()
{
	Test t;
	t.fun();
	system("pause");
	return 0;
}