//字符串转化为整数
//要考虑溢出的问题以及符号的问题
//例如输入字符串为+127382，则输出127382
//输入字符串122de232,则输出0
#include<iostream>
#include<string>
using namespace std;

int StrToInt(string str)
{
	int tmp = 1;
	if (str.empty())
	{
		return 0;
	}
	
	if (str[0] == '-') //处理负号
	{
		tmp = -1;
		str[0] = '0'; //这里是字符'0',不是0
	}
	else if (str[0] == '+') //处理正号
	{
		tmp = 1;
		str[0] = '0';
	}

	int sum = 0;
	for (int i = 0; i<str.size(); ++i)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			sum = 0;
			break;
		}
		sum = sum * 10 + str[i] - '0';//例如字符串为123，第一次循环sum=1;第二次循环sum=12,第三次循环sum=123
	}
	return tmp * sum;
}

int main()
{
	string s;
	cout << "请输入一组字符串" << endl;
	getline(cin, s);
	cout << StrToInt(s) << endl;
	system("pause");
	return 0;
}