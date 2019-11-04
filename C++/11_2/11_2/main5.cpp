//unique_ptr，声明成私有化，防止拷贝和赋值（不建议用）
#include<iostream>
#include<memory>
using namespace std;

class Test
{
public:
	int  m_a;
};

int main5()
{
	unique_ptr<int> ap(new int);
	unique_ptr<Test> apt(new Test);

	*ap = 5;
	apt->m_a = 6;

	cout << *ap << " " << apt->m_a << endl;

	//unique_ptr<int> ap2 = ap;//用unique_ptr不能 进行拷贝
	cout << *ap << " " << apt->m_a << endl;//此时出现错误
	system("pause");
	return 0;
}