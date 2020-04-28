#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		string s;
		vector<string> vs;
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> s;
			vs.push_back(s);
		}

		for (int i = 0; i < vs.size(); i++)
		{
			string str = vs[i];
			if (str.size() == 0)
			{
				cout << "No" << endl;
				continue;
			}
			for (int j = 0; j < str.size(); j++)
			{
				int tmp = j;
				for (int k = tmp+1; k <= str.size(); k++)
				{
					if (str[k] >= 'A' && str[k] <= 'Z')
					{
						if (str[tmp] == str[k])
						{
							if (k = tmp + 1)
							{
								str[tmp] = '0';
								count++;
							}
							str[k] = '0';
							count++;
						}
						else
						{
							tmp++;
						}
					}
				}
			}

			if (count == str.size())
			{
				cout << "Yes" << endl;
			}
			else
			{
				cout << "No" << endl;
			}
		}
	}
	system("pause");
	return 0;
}