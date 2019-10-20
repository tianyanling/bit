#include<iostream>
using namespace std;

class Turetype
{
public:
	static bool get()
	{
		return true;
	}
};

class Falsetype
{
public:
	static bool get()
	{
		return false;
	}
};

template <class T>
class TypeTraits
{
public:
	typedef Falsetype Jtype;
};

template<>
class TypeTraits<int>
{
public:
	typedef Turetype Jtype;
};

template<>
class TypeTraits<float>
{
public:
	typedef Turetype Jtype;
};

int main4()
{
	cout << TypeTraits<int>::Jtype::get << endl;
	cout << TypeTraits<float>::Jtype::get << endl;
	system("pause");
	return 0;
}