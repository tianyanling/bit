//È±Ê¡²ÎÊı
#include<iostream>
using namespace std;

void TestFunc(int a, int b = 10, int c = 20)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}

int main()
{
	TestFunc(10);
	system("pause");
	return 0;
}