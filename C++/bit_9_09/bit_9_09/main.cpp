#include"coordinate.h"

int main()
{
	Coordinate coor(2, 4);

	cout << coor.Getx() << ',' << coor.Gety() << endl;

	cout << -coor.Getx() << ',' << -coor.Gety() << endl;//-

	++coor;
	cout << coor.Getx() << ',' << coor.Gety() << endl;//ǰ��++

	cout << coor++.Getx() << ',';
	cout << coor++.Gety() << endl;//����++
	system("pause");
	return 0;
}