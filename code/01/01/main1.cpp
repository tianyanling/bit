#include<iostream>
using namespace std;

class TestBase
{
public:
	TestBase()
	{
		cout << "���ǻ��๹��" << endl;
	}

	~TestBase()
	{
		cout << "���ǻ�������" << endl;
	}
};

class Test : public TestBase
{
public:
	Test()
	{
		cout << "���������๹��" << endl;
	}

	~Test()
	{
		cout << "��������������" << endl;
	}

	void fun() 
	{
		cout << "����������" << endl;
	}
};

int main()
{
	Test t;
	t.fun();
	system("pause");
	return 0;
}