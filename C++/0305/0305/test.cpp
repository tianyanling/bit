#include<iostream>
#include<string>
using namespace std;

string change(string s)
{
	string tmp;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			tmp += s[i] - 32;
		}
		else
		{
			tmp += s[i];
		}
	}
	return tmp;
}

string ecrept(string s)
{
	string tmp= change(s);

	string mingwen = "DEFGHIJKLMNOPQRSTUVEXYZABC";
	string  ret;
	if (tmp.empty())
	{
		return 0;
	}

	for (int i = 0; i < tmp.size(); i++)
	{
		for (int j = 0; j < mingwen.size(); j++)
		{
			if (tmp[i] == mingwen[j])
			{
				if (tmp[i] == 'X')
				{
					ret += 'A';
				}
				else if (tmp[i] == 'Y')
				{
					ret += 'B';
				}
				else if (tmp[i] == 'Z')
				{
					ret += 'C';
				}
				else
				{
					ret += mingwen[j] + 3;
				}
			}
		}
	}
	return ret;
}

string decrept(string s)
{
	string tmp = change(s);

	string miwen = "ABCDEFGHIJKLMNOPQRSTUVEXYZ";
	string  ret;
	if (tmp.empty())
	{
		return 0;
	}

	for (int i = 0; i < tmp.size(); i++)
	{
		for (int j = 0; j < miwen.size(); j++)
		{
			if (tmp[i] == miwen[j])
			{
				if (tmp[i] == 'A')
				{
					ret += 'X';
				}
				else if (tmp[i] == 'B')
				{
					ret += 'Y';
				}
				else if (tmp[i] == 'C')
				{
					ret += 'Z';
				}
				else
				{
					ret += miwen[j] - 3;
				}
			}
		}
	}
	return ret;
}

int main()
{
	string s = "ckrqjjxr";
	cout << ecrept(s) << endl;
	cout << decrept(s) << endl;
	system("pause");
	return 0;
}