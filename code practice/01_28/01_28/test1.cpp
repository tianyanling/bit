//字符串转化整数
//https://leetcode-cn.com/problems/string-to-integer-atoi/
#include<iostream>
#include<string>
using namespace std;

int myAtoi(string str)
{
	int ret = 0;
	int sig = 1;//符号
	string tmp;
	if (str.empty())
	{
		return 0;
	}

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] != ' ')//寻找第一个非空字符
		{
			ret = i;
		}
		else
		{
			continue;
		}

		if (str[ret] == '+' || str[ret] == '-')//判断第一个非空字符是否为正负号
		{
			if (str[ret] == '-')//若为负号，则改变sig的值
			{
				sig = 0;
			}
			i = ret + 1;
			while (str[i] >= '0' && str[i] <= '9')//获取符号后的连续数字
			{
				tmp.push_back(str[i]);
				i++;
			}
			break;
		}
		else if (str[ret] >= '0' && str[ret] <= '9')//若第一个非空字符为数字
		{
			while (str[i] >= '0' && str[i] <= '9')//获取符号后的连续数字
			{
				tmp.push_back(str[i]);
				i++;
			}
			break;
		}
		else
		{
			return 0;
		}
	}
	long long res = 0;
	int j = 0;
	while (j < tmp.size())//将字符串转换为整数
	{
		res =res*10 + tmp[j] - '0';
		j++;

		if (res >= 2147483648)//判断是否越界
		{
			return sig == 0 ? INT_MIN : INT_MAX;
		}
	}

	return sig == 0 ? -res : res;
}

int main1()
{
	string str = "18446744073709551617";

	cout << myAtoi(str) << endl;
	system("pause");
	return 0;
}

