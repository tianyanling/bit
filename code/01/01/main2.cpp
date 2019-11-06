#include<iostream>
using namespace std;

class Tbase1
{
public:
	static int m_s_a;
	Tbase1()
	{

	}
};

int Tbase1::m_s_a = 10;//静态成员变量需要在类外赋初值

class Tbase2 : public Tbase1
{

};

class Tbase3 : public Tbase2
{

};

class Tbase4 : public Tbase3
{

};

int main3()
{
	Tbase4::m_s_a = 20;

	cout << Tbase1::m_s_a << endl;
	system("pause");
	return 0;
}