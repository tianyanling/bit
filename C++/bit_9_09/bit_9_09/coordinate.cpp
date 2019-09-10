#include"coordinate.h"

Coordinate::Coordinate(int x, int y)
{
	m_ix = x;
	m_iy = y;
}

int Coordinate::Getx()
{
	return m_ix;
}

int Coordinate::Gety()
{
	return m_iy;
}

Coordinate &Coordinate::operator - ()
{
	m_ix = -m_ix;
	m_iy=-m_iy;
	return *this;
}

Coordinate &operator - (Coordinate &c)
{
	c.m_ix = -c.m_ix;
	c.m_iy = -c.m_iy;
	return c;
}

Coordinate &Coordinate::operator++()
{
	m_ix++;
	m_iy++;
	return *this;
}

Coordinate Coordinate::operator ++ (int)
{
	Coordinate tmp(*this);
	this->m_ix++;
	this->m_iy++;
	return tmp;
}

