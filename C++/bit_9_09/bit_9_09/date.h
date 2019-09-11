#pragma once
#include<iostream>
using namespace std;

class Date
{
	int m_x;
	int m_y;
public:
	Date(int x, int y);
	int Getx();
	int Gety();

	Date &operator -- ();

	Date operator -- (int);

	Date &operator ++ ();//«∞÷√++

	Date operator ++ (int);//∫Û÷√++
};