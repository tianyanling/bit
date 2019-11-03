#include<iostream>
using namespace std;
/*
//智能指针的类模板（只有是new出来的变量才能使用）
template<class T>
class smart_ptr
{
	T * m_ptr;
public:
	smart_ptr(const smart_ptr & o) = delete;//也可以为default

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
	//sp2 = sp;//此时出现错误
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