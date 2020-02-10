#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	string tmp;
	char flag = '1';

	while (cin >> s)
	{
		int i, j;
		for (i = 0; i < s.size(); i++)
		{
			for (j = s.size() - 1; j > i; j--)
			{
				if (s[i] == s[j])
				{
					s[i] = flag;
					s[j] = flag;
				}
			}
		}
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] != flag)
			{
				tmp = s[i];
				break;
			}
		}
		cout << tmp;
		if (tmp.empty())
		{
			cout << -1;
		}
	}

	system("pause");
	return 0;
}