#include<iostream>
using namespace std;
/*
//����ָ�����ģ�壨ֻ����new�����ı�������ʹ�ã�
template<class T>
class smart_ptr
{
	T * m_ptr;
public:
	smart_ptr(const smart_ptr & o) = delete;//Ҳ����Ϊdefault

	smart_ptr(T * ptr = nullptr):
		m_ptr(ptr)
	{

	}

	~smart_ptr()
	{
		if (m_ptr)
		{
			delete[] m_ptr;
			m_ptr = nullptr;
		}
	}

	T &operator *()
	{
		return *m_ptr;
	}

	T &operator ->()
	{
		return m_ptr;
	}

	T &operator [](int i)
	{
		return m_ptr[i];
	}
};
*/
class Test
{
public:
	int  m_a;
};

int main2()
{
	//smart_ptr<int> sp (new int[5]);
	//smart_ptr<Test> sp(new Test);
	//smart_ptr<int> sp2;
	//sp2 = sp;//��ʱ���ִ���
	/*for (int i = 0; i < 5; i++)
	{
		sp[i] = i + 1;
	}

	for (int i = 0; i < 5; i++)
	{
		cout<<sp[i] <<" ";
	}

	cout << endl;*/
	system("pause");
	return 0;
}