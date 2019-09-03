#include<iostream>
using namespace std;

class FTest1
{
	int m_a;
	int m_b;
public:
	FTest1(int a,int b)
	{
		m_a = a;
		m_b = b;
	}

	friend ostream & operator << (ostream & os, FTest1 & data);//сят╙
	friend istream & operator >> (istream & is, FTest1 & data); 
};

class FTest2
{
public:
	FTest2()
	{

	}
};

ostream & operator << (ostream & os, FTest1 & data)
{
	os << data.m_a << ' ' << data.m_b;
	return os;
}

istream & operator >> (istream & is, FTest1 & data)
{
	is >> data.m_a >> data.m_b;
	return is;
}

int main()
{
	FTest1 ft(2,3);
	ofstream os("1.txt");
	//operator<<(cout, ft);

	cin >> ft;

	cout << ft << endl;

	system("pause");
	return 0;
}