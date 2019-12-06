#include<iostream>
using namespace std;

class Base
{
public:
	virtual void Func1()
	{
		cout << "This is Base::Func1" << endl;
	}

	virtual void Func2()
	{
		cout << "This is Base::Func2" << endl;
	}

	void Func3()
	{
		cout << "This is Base::Func3" << endl;
	}
};

class TestBase : public Base
{
public:
	virtual void Func1()
	{
		cout << "This is TestBase::Func1" << endl;
	}
};

int main()
{
	Base b;
	TestBase tb;

	system("pause");
	return 0;
}