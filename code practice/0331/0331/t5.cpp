#include <iostream>
using namespace std;

bool leapyear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return true;
	}
	return false;
}

int main5()
{
	int year1, month1, day1;//月份是素数的有2 、3、5 、7 、11
	int year2, month2, day2;
	int money = 0;
	int day = 0;
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int months[13] = { 0,2,1,1,2,1,2,1,2,2,2,1,2 };

	while (cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2)
	{
		if (year1 == year2 && month1 == month2)//同年同月
		{
			leapyear(year1) ? days[2] = 29 : days[2] = 28;
			money += (days[month1] - day1 + 1)* months[month1++];
			cout << money << endl;
			money = 0;
		}
		else if (year1 == year2 && month1 != month2)//同年不同月
		{
			leapyear(year1) ? days[2] = 29 : days[2] = 28;
			money += (days[month1] - day1 + 1)* months[month1++];//计算起始月份，并转到下个月1号
			day1 = 1;
			while (month1 < month2)
			{
				money += days[month1] * months[month1++];
			}
			money += day2* months[month2];//不完成月份
			cout << money << endl;
			money = 0;
		}
		else if (year1 != year2)//不同年
		{
			leapyear(year1) ? days[2] = 29 : days[2] = 28;
			money += (days[month1] - day1 + 1)* months[month1++];//不完整月份
			day1 = 1;

			while (month1 <= 12)
			{
				money += days[month1] * months[month1++];
			}
			year1++;//切换到下一年
			while (year1 < year2)//完整年
			{
				money += leapyear(year1++) ? 580 : 579;
			}

			leapyear(year2) ? days[2] = 29 : days[2] = 28;
			money += day2* months[month2--];//不完成月份
			while (month2 > 0)
			{
				money += days[month2] * months[month2];
				month2--;
			}
			cout << money << endl;
			money = 0;
		}
	}
	return 0;
}