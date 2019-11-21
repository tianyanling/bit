//合法括号序列判断
//给定一个字符串A和它的长度n，请返回一个bool值代表它是否为一个合法的括号串。
//测试样例："(()())", 6      返回：true
//测试样例："()a()()", 7     返回：false
//测试样例："()(()()", 7      返回：false
#include<iostream>
#include<string>
using namespace std;

bool chkParenthesis(string A, int n) 
{
	int count = 0;
	for (int i = 0; i < A.size(); i++)
	{
		if (A[i] == '(')
		{
			count++;
		}
		else if (A[i] == ')')
		{
			if (count > 0)
			{
				count--;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	return true;
}

int main()
{
	string s;

	cout << chkParenthesis("()a()()", 7) << endl;
	system("pause");
	return 0;
}