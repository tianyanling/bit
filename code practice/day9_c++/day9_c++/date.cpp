#include"date.h"

int Date::Getx()
{
	return m_x;
}

int Date::Gety()
{
	return m_y;
}

Date &Date::operator++()
{
	m_x++;
	m_y++;
	return *this;
}

Date Date::operator++(int)
{
	Date tmp(*this);
	m_x++;
	m_y++;
	return tmp;
}

Date &Date::operator--()
{
	m_x--;
	m_y--;
	return *this;
}

Date Date::operator--(int)
{
	Date tmp(*this);
	m_x--;
	m_y--;
	return tmp;
}