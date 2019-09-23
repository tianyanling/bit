//ÄÚ´æ¹ÜÀí
#include<iostream>
#include<cstdlib>
using namespace std;

class Test
{
	int m_a;
	int m_b;
	int *m_pt;
public:
	Test():
	m_a(0),
	m_b(0)
	{
		m_pt = new int;
	}

	Test(int a,int b) :
		m_a(a),
		m_b(b)
	{
		m_pt = new int;
	}

	~Test()
	{
		delete m_pt;
	}

	void printTest()
	{
		cout << m_a << ' ' << m_b << endl;
	}

};

int main()
{
	Test *pa = new Test(3,6);

	pa->printTest();
	delete pa;
	system("pause");
	return 0;
}