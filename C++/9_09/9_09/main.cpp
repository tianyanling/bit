#include"date.h"

int main()
{
	Date d(2, 4);

	cout << d.Getx() << ',' << d.Gety() << endl;

	--d;
	cout << d.Getx() << ',' << d.Gety() << endl;//ǰ��--

	cout << d--.Getx() << ',';
	cout << d--.Gety() << endl;//����--

	++d;
	cout << d.Getx() << ',' << d.Gety() << endl;//ǰ��++

	cout << d++.Getx() << ',';
	cout << d++.Gety() << endl;//����++

	system("pause");
	return 0;
}