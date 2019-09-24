#include"date.h"

int main()
{
	Date d(2, 4);

	cout << d.Getx() << ',' << d.Gety() << endl;

	--d;
	cout << d.Getx() << ',' << d.Gety() << endl;//前置--

	cout << d--.Getx() << ',';
	cout << d--.Gety() << endl;//后置--

	++d;
	cout << d.Getx() << ',' << d.Gety() << endl;//前置++

	cout << d++.Getx() << ',';
	cout << d++.Gety() << endl;//后置++

	system("pause");
	return 0;
}