#include<iostream>
using namespace std;

class Base
{
public:
	int m_a;

	void fun1()
	{
		cout << "Base :: fun1" << endl;
	}
};

class Base2
{
public:
	int m_b;

	void fun2()
	{
		cout << "Base2 :: fun2" << endl;
	}
};

class Test : public Base, public Base2
{
public:

};

int main()
{

	system("pause");
	return 0;
}