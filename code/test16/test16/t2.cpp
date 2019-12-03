#include<iostream>
#include<string>
#include<vector>
using namespace std;

void Joker(string s1, string s2)
{
	int i = 0;
	int j = 0;
	char str[20] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K', "joker", "JOKER" };
	if (s1.size() == s2.size() && s1.size() == 1)
	{
		if (s1 > s2)
		{
			cout << s1 << endl;
		}
		else if (s1 < s2)
		{
			cout << s2 << endl;
		}
		else
		{
			cout << "ERROR" << endl;
		}		
	}
	else if (s1.size() == s2.size() && s1.size() == 2)
	{
		for (i = 0, j = 0; i < s1.size(), j < s2.size(); i++, j++)
		{
			if (s1[0] != s1[1] || s2[0] != s2[1])
			{
				cout << "ERROR" << endl;
			}
			else
			{
				if (s1 == "joker JOKER")
				{
					cout << s1 << endl;
				}
				else if (s2 == "joker JOKER")
				{
					cout << s2 << endl;
				}
				else
				{
					if (s1[i] > s2[j])
					{
						cout << s1 << endl;
					}
					else if (s1[i] < s2[j])
					{
						cout << s2 << endl;
					}
					else
					{
						cout << "ERROR" << endl;
					}
				}
			}
		}
	}
	else if (s1.size() == s2.size() && s1.size() == 3 ||
		s1 == "joker JOKER" || s2 == "joker JOKER")
	{

	}
	else if (s1.size() == s2.size() && s1.size() == 4 ||
		s1 == "joker JOKER" || s2 == "joker JOKER")
	{
		
	}
	else if (s1.size() == s2.size() ||
		s1 == "joker JOKER" || s2 == "joker JOKER")
	{

	}
	else
	{
		cout << "ERROR" << endl;
	}
}

int main()
{
	string s1;
	string s2;

	getline(cin, s1);
	getline(cin, s2);

	Joker(s1, s2);

	system("pause");
	return 0;
}