//���������
#include<iostream>
using namespace std;

class Test1
{
public:
	int m_a;
	int m_b;

	Test1()
	{
		m_a = 0;
		m_b = 0;
	}

	Test1(int a,int b) : m_a(a), m_b(b)
	{
	}

	Test1 operator+(Test1 &s) const  //ĩβ��const����this����ʾthis��ֵ���ܸı�
	{
		Test1 res;
		res.m_a = m_a + s.m_a;
		res.m_b = m_b + s.m_b;

		return res;
	}

	Test1 & operator =(const Test1 &s)
	{
		m_a = s.m_a;
		m_b = s.m_b;

		return *this;
	}
};

int main()
{
	Test1 a(3, 5);
	Test1 b(2, 7);

	Test1 c;
	Test1 d;
	d = c = a + b;//֧������(��ֵ�����������������)

	cout << d.m_a << ' ' << d.m_b << endl;
	system("pause");
	return 0;
}