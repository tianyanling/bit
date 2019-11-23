//×Ó´®Ä£ºıÆ¥Åä
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	string sub;
	getline(cin, str);
	getline(cin, sub);
	int i = 0;
	int j = 0;

	int t = 0;
	int count = 0;
	while (i<str.size() && j<sub.size())
	{
		if (str[i] == sub[j])
		{
			i++;
			j++;
			count++;
			t = 0;
		}
		else
		{
			if (sub[j + 1] == str[i])
			{
				i++;
				j += 2;
				t = 0;
				count++;
			}
			else  if (sub[j] == '?' && t<3)
			{
				i++;
				count++;
				t++;
			}
			else
			{
				break;
			}
		}
	}
	if (j == sub.size())
	{
		cout << count << endl;
	}
	else
	{
		cout << -1 << endl;
	}

	system("pause");
	return 0;
}
