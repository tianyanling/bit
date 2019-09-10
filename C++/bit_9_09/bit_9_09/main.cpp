#include"coordinate.h"

int main()
{
	Coordinate coor(2, 4);

	cout << coor.Getx() << ',' << coor.Gety() << endl;

	cout << -coor.Getx() << ',' << -coor.Gety() << endl;//-

	++coor;
	cout << coor.Getx() << ',' << coor.Gety() << endl;//Ç°ÖÃ++

	cout << coor++.Getx() << ',';
	cout << coor++.Gety() << endl;//ºóÖÃ++
	system("pause");
	return 0;
}