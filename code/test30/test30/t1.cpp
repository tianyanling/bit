//最难得问题
#include<iostream>
#include<string>
using namespace std;

int main1()
{
	string str = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	string s;
	int i, j;
	while (getline(cin, s))
	{
		for (i = 0; i < s.size(); i++)
		{
			if (s[i] == ' ')
			{
				cout << " ";
			}
			else
			{
				for (j = 0; j < str.size(); j++)
				{
					if (s[i] == str[j])
					{
						break;
					}
				}
				if (j >= 5)
				{
					cout << str[j - 5];
				}
				else
				{
					cout << str[j + 21];
				}
			}
			
		}
		cout << endl;
	}
	system("pause");
	return 0;
}