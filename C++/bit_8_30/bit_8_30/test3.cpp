//static��̬��Ա����
#include<iostream>
using namespace std;

class A
{
public:
	A() { ++_scount; }
	A(const A& t) { ++_scount; }
	static int GetACount() { return _scount; }
private:
	static int _scount;
};

int A ::_scount = 0;

void TestA()
{
	cout << A::GetACount() << endl;
	A a1, a2;
	A a3(a1);
	cout << A::GetACount() << endl;
}

int main()
{

	system("pause");
	return 0;
}