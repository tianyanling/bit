#include<iostream>
using namespace std;


template <class T>
class Test
{
	int m_a;
public:
	Test(T s) :
		m_a(s)
	{

	}

	void setData(T s);

	void showData()
	{
		cout << m_a << endl;
	}
};

template <class T>
void Test<T> :: setData(T s)//������������ڳ�Ա����
{
	m_a = s;
}

int main2()
{
	Test<int> a(6);
	a.setData(8);
	a.showData();

	system("pause");
	return 0;
}