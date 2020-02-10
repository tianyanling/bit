#include<iostream>
#include<string>
using namespace std;

bool matchString(string s1, string s2)
{
	string tmp;
	for (int i = 0,j = 0; i < s1.size(), j<s2.size(); i++,j++)
	{
		if (s1[i] == s2[j])
		{
			tmp.push_back(s2[i]);
		}
		else
		{
			if (s1[i] == '*')
			{
				if (s1[i + 1] == s2[j])
				{
					tmp.push_back(s2[i]);
				}
				else
				{
					for (j = i; j < s2.size(); j++)
					{
						if ((s2[j] > '0' && s2[j] < '9') || (s2[j] > 'a' && s2[j] < 'z') || (s2[j] > 'A' && s2[j] < 'Z'))
						{
							tmp.push_back(s2[i]);
						}
					}
				}
			}
			else if (s1[i] == '?')
			{
				if ((s2[j] > '0' && s2[j] < '9') || (s2[j] > 'a' && s2[j] < 'z') || (s2[j] > 'A' && s2[j] < 'Z'))
				{
					tmp.push_back(s2[i]);
				}
			}
			else
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	string s1;
	string s2;
	while (cin >> s1 >> s2)
	{
		if (matchString(s1, s2))
		{
			cout << "true" << endl;
		}
		else
		{
			cout <<"false"<< endl;
		}
	}
	system("pause");
	return 0;
}