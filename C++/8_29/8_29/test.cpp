#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

class Foo
{
	int value = 0;
public:
	Foo(int val) :value(val) {}
	Foo() = default;
};

class Test
{
private:
	Foo foo;
};

class Day
{
private:
	int day;
	int month;
public:
	//Day(int a) : month(a), day(a*30){}
	Day(int a)
	{
		month = a;
		day = a * 30;
	}
	void printDay()
	{
		cout << "month:" << month <<"," <<"day:" << day << endl;
	}
};

class Test
{
private:
	const int age;
	string &name;
public:
	Test(int a, string n) : age(a), name(n) {}
};

int main()
{
	Day day(3);
	day.printDay();
	system("pause");
	return 0;
}
