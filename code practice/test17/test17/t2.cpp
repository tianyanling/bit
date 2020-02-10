//超长正整数相加
//题目描述： 请设计一个算法完成两个超长正整数的加法。
//输入参数：String addend：加数、String augend：被加数、返回值：加法结果

//思路：先将较短的字符串的位数与较长的字符串位数补齐（高位补0），
#include<iostream>
#include<string>
using namespace std;

string AddLongInter(string addend, string augend)
{
	int tmp = 0, ret = 0;
	while (addend.size() < augend.size())
	{
		addend = "0" + addend;
	}
	while (addend.size() > augend.size())
	{
		augend = "0" + augend;
	}

	for (int i = addend.size() - 1; i >= 0; i--)
	{
		tmp = addend[i] - '0' + augend[i] - '0' + ret;
		addend[i] = tmp % 10 + '0';
		if (tmp / 10)
		{
			ret = 1;
		}
		else
		{
			ret = 0;
		}
	}
	if (ret)
	{
		addend = "1" + addend;
	}
	return addend;
}

int main()
{
	string a, b;
	while (cin >> a >> b)
	{
		cout<<AddLongInter(a, b) << endl;
	}
	system("pause");
	return 0;
}