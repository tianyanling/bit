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

class Test : public TestBase//�ɷ��ʣ��ɼ̳�
//class Test : protected TestBase//���ɷ��ʡ��ɼ̳�
//class Test : private TestBase//���ɷ��ʡ����ɼ̳�
{
public:
	int m_a;

	Test(int a, int b) :
		TestBase(a),//���ø���Ĺ��캯��
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