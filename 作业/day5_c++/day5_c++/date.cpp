#include"date.h"

//�ж�ÿ���·ݵ�����
static uint getMonthDay(int y, uint m)
{
	if (m > 12 || m == 0)
	{
		return 0;
	}

	if (m == 4 || m == 6 || m == 9 || m == 11)
	{
		return 30;
	}
	else if (m == 2)
	{
		return 28 + (y % 400 == 0 || (y % 4 == 0 && y % 100));//��������������Ҫ��һ��
	}
	else
	{
		return 31;
	}
}

//������ʼ������ֹ��֮���м�������
int getleapNum(int sy, int ey)//sy��ʾ��ʼ�꣬ey��ʾ��ֹ��
{
	int tmp = sy % 4;
	if (tmp)
	{
		sy += (4 - tmp);//����ʼ�겻�������ʱ�򣬼��������ʼ��֮��ĵ�һ������
	}
	return (ey - sy) / 4 + 1;//
}

Date Date::operator +(uint delay) const
{
	Date res = *this;
	uint tmp;

	tmp = getMonthDay(res.m_year, res.m_month);
	while (delay >= tmp)
	{
		delay -= tmp;
		res.m_month++;
		if (res.m_month > 12)
		{
			res.m_month = 1;
			res.m_year++;
		}
		tmp = getMonthDay(res.m_year, res.m_month);
	}

	res.m_day += delay;
	if (res.m_day > tmp)
	{
		res.m_month++;
		if (res.m_month > 12)
		{
			res.m_month = 1;
			res.m_year++;
		}
		res.m_day -= tmp;
	}

	return res;
}

ostream &operator << (ostream & os, Date &d)
{
	os << d.m_year << '-' << d.m_month << '-' << d.m_day;
	return os;
}

bool Date :: operator<(const Date & d)const
{
	if (m_year < d.m_year)
	{

		return true;
	}

	if (m_year == d.m_year && m_month < d.m_month)
	{
		return true;
	}
	else if (m_year == d.m_year &&
				m_month == d.m_month &&
				m_day < d.m_day)
	{
		return true;
	}
	return false;
}

bool Date :: operator>(const Date & d)const
{
	if (m_year > d.m_year)
	{

		return true;
	}

	if (m_year == d.m_year && m_month > d.m_month)
	{
		return true;
	}
	else if (m_year == d.m_year &&
		m_month == d.m_month &&
		m_day > d.m_day)
	{
		return true;
	}
	return false;
}

bool Date :: operator<=(const Date & d)const
{
	return !(*this > d);
}

bool Date :: operator>=(const Date & d)const
{
	return !(*this < d);
}

bool Date :: operator==(const Date & d)const
{
	if (m_year == d.m_year &&
		m_month == d.m_month &&
		m_day == d.m_day)
	{
		return true;
	}
	return false;
}

bool Date :: operator!=(const Date & d)const
{
	return !(*this == d);
}
