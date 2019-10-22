#include<iostream>
using namespace std;

class TestBase
{
public:
	int m_a;

	class TestBase(int i) :
		m_a(i)
	{
	}
};

class Test : public TestBase//可访问，可继承
//class Test : protected TestBase//不可访问、可继承
//class Test : private TestBase//不可访问、不可继承
{
public:
	int m_a;

	Test(int a, int b) :
		TestBase(a),//调用父类的构造函数
		m_a(b)
	{

	}
};

int main()
{
	Test * pt = new Test(5, 6);
	TestBase * ptb = pt;

	cout << pt->m_a << endl;
	cout << ptb->m_a << endl;

	//Test t(5, 6);

	//cout << t.m_a << endl;
	system("pause");
	return 0;
}