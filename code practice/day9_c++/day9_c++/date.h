#pragma once
#include<iostream>
using namespace std;

class Date
{
	int m_x;
	int m_y;
public:
	Date(int x, int y) :
	m_x(x),
	m_y(y)
	{
	}

	Date & operator ++();
	Date operator ++(int);

	Date & operator --();
	Date operator --(int);

	int Getx();
	int Gety();
};