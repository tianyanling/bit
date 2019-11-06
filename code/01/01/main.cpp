//继承
#include<iostream>
#include<cstdlib>
using namespace std;

//继承可以增加代码的复用性
//当基类和派生类有相同变量时，基类的变量被隐藏，尽可能不要让变量重名
//只要函数名相同（不管参数列表和返回值类型），就出现隐藏
//private：不可继承、不可访问
//protected：可继承、不可访问
//public：可继承、可访问
//继承权限和基类的权限哪个小就跟随哪个走
//一般使用过程中都用public
//class默认继承方式为private，struct默认继承方式为public
class TestBase
{
public:
	int m_a;
	TestBase(int i) ://当基类没有默认构造时，子类有默认构造时不能调用
		m_a(i)
	{

	}

	void func()
	{
		cout << "我是父类的函数" << endl;
	}
};

//子类的内存空间比父类的内存空间大，所以可以把子类指针强转为父类指针,但是不能把父类指针强转为子类指针
class Test : public TestBase
{
public:
	int m_a;
	Test(int a, int b) ://调用基类的构造函数时只能用初始化列表
		TestBase(a),
		m_a(b)
	{

	}

	void func()
	{
		cout << TestBase::m_a << endl;//在子类内可以用 基类:: 基类成员 来访问基类成员
		cout << "我是子类的函数" << endl;
	}
};

int main1()
{
#if 0
	Test t(5,6);

	//t.m_a = 7;//不可访问，私有继承将父类的东西变成子类私有
	//t.m_a = 7;
#else if
	Test *pt = new Test(5, 6);
	TestBase *ptb = pt;//子类指针强转成父类指针

	//cout << pt->m_a << endl;
	//cout << ptb->m_a << endl;

	pt->func();
	ptb->func();
#endif
	system("pause");
	return 0;
}