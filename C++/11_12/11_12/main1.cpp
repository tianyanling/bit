//“Ï≥£
#include<iostream>
using namespace std;

class Base
{
public:
	int m_a;
};

class Test : public Base
{

};

int main()
{
	try
	{
		int a;
		a = 5;

		throw a;
	}
	catch(int &e)
	{
		cout << e;
	}
	catch (float &e)
	{
		cout << e;
	}
	catch (Test &e)
	{
		cout << e.m_a;
	}
	catch (...)
	{
		cout << "¿¨ª¯Õ∞" << endl;
	}

	system("pause");
	return 0;
}