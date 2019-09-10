#pragma once
#include<iostream>
using namespace std;

class Coordinate
{
	int m_ix;
	int m_iy;
	friend Coordinate &operator - (Coordinate &c);
public:
	Coordinate(int x, int y);
	int Getx();
	int Gety();

	Coordinate &operator - ();

	Coordinate &operator ++ ();//«∞÷√++

	Coordinate operator ++ (int);//∫Û÷√++
};