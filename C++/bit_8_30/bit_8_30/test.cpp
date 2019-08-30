//¹¹Ôìº¯Êı
#include<iostream>
using namespace std;

class Test2
{
public:
	int b;
	Test2(int i)
	{
		b = i;
	}
};

class Test
{
public:
	const int i;
	int &ri;
	Test2 t2;

	Test(int a) : i(2),ri(a), t2(Test2(a))
	{
	}
};

int main1()
{
	int c = 8;
	Test a(c);
	cout << a.t2.b << endl;
	system("pause");
	return 0;
}