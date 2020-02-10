//字符串转化为整数（该代码存在溢出问题，不完整，正确代码见t3）
#include<iostream>
#include<string>
using namespace std;

int StrToInt_(string str) 
{
	string tmp;
	int count = 0;
	int flag = 1;
	int sum = 0;
	if (str.empty())
	{
		return 0;
	}

	tmp = str;
	for (int i = 0; i<tmp.size() -1; i++)
	{
		if (str[0] == '+')
		{
			tmp = str.substr(1, str.size() -1);
			i++;
			count++;
			flag = 1;
		}

		if (str[0] == '-')
		{
			tmp = str.substr(1, str.size() - 1);
			i++;
			count++;
			flag = -1;
		}

		if (tmp[i] > '0' && tmp[i] <= '9')
		{
			count++;
		}
	}

	if (count == tmp.size() -1)
	{
		cout << str << endl;
	}
	else
	{
		cout << "0" << endl;
	}
	return 0;
}

int main2()
{
	string s;
	cout << "请输入一组字符串" << endl;
	getline(cin, s);
	StrToInt_(s);
	//cout << StrToInt(s) << endl;
	system("pause");
	return 0;
}