//计算日期到天数转换
//链接：https://www.nowcoder.com/questionTerminal/769d45d455fe40b385ba32f97e7bcded?pos=16&orderByHotValue=1
//根据输入的日期，计算是这一年的第几天。。
//详细描述：
//输入某年某月某日，判断这一天是这一年的第几天？
#include<iostream>
using namespace std;

//获取每个月有多少天
static int getMonthDay(int y, int m)
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
		return 28 + (y % 400 == 0 || (y % 4 == 0 && y % 100));
	}
	else
	{
		return 31;
	}
}

//判断输入是否合法
bool InputParam(int year, int month, int day)
{
	if (month > 12)
	{
		return false;
	}

	if ((year % 400 == 0 || (year % 4 == 0 && year % 100)))//闰年，输入合法性判断
	{
		if (month == 2)
		{
			if (day > 28)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			if (day > 30)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		else
		{
			if (day > 31)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
	}
	else
	{
		if (month == 2)
		{
			if (day > 29)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			if (day > 30)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		else
		{
			if (day > 31)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
	}
}

//功能实现
static int iConverDataToDay(int year, int month, int day)
{
	int days = 0;

	if (InputParam(year, month, day))
	{
		for (int i = 1; i < month; i++)//计算这个月之前，今年的天数
		{
			days += getMonthDay(year, i);
		}

		days += day;
		return days;
	}
	else
	{
		return -1;
	}
}

int main()
{
	int year, month, day;
	while (cin >> year >> month >> day)
	{
		cout << iConverDataToDay(year, month, day) << endl;
	}
	system("pause");
	return 0;
}





