#include<iostream>
using namespace std;

template<class T1, class T2>
class test
{
	T1 m_a;
	T2 m_b;
public:
	test()
	{
		cout << "T1,T2" << endl;
	}
};

template<>
class test<int,char>
{
	int m_a;
	char m_b;
public:
	test()
	{
		cout << "int, char" << endl;
	}
};

template<class T1>
class test<T1, double>
{
	T1 m_a;
	double m_b;
public:
	test()
	{
		cout << "T1,double" << endl;
	}
};

template<class T1, class T2>
class test<T1 *, T2 *>
{
	T1 * m_a;
	T2 * m_b;
public:
	test()
	{
		cout << "T1 *,T2 *" << endl;
	}
};

template<class T1, class T2>
class test<T1 &, T2 &>
{
	T1 & m_a;
	T2 & m_b;
public:
	test(T1 &a, T2 &b):
		m_a(a),
		m_b(b)
	{
		cout << "T1 &,T2 &" << endl;
		m_a = 8;
	}
};

int main3()
{
	test<float, double> t1;
	test<int, char> t2;
	test<int *, float *> t3;
	int a = 0;
	char b = 0;
	test<int &, char&> t4(a, b);

	cout << a << endl;
	system("pause");
	return 0;
}