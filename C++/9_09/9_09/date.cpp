#include"date.h"

Date::Date(int x, int y)
{
	m_x = x;
	m_y = y;
}

int Date::Getx()
{
	return m_x;
}

int Date::Gety()
{
	return m_y;
}

Date &Date::operator -- ()
{
	m_x--;
	m_y--;
	return *this;
}

Date Date::operator -- (int)
{
	Date tmp(*this);
	this->m_x--;
	this->m_y--;
	return tmp;
}

Date &Date::operator++()
{
	m_x++;
	m_y++;
	return *this;
}

Date Date::operator ++ (int)
{
	Date tmp(*this);
	this->m_x++;
	this->m_y++;
	return tmp;
}

