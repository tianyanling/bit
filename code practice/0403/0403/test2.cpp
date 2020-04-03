// ³­ËÍÁĞ±í
#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{

	string list, name;
	while (getline(cin, list))
	{
		getline(cin, name);
		vector<string>v;

		for (int i = 0; i<list.size(); i++)
		{
			if (list[i] == '\"')
			{
				v.push_back(list.substr(i + 1, list.find('\"', i + 1) - i - 1));
				i = list.find('\"', i + 1) + 1;
			}
			else
			{
				if (list.find(',', i) == list.npos)
				{
					v.push_back(list.substr(i, list.size() - i));
					i = list.size();
				}
				else
				{
					v.push_back(list.substr(i, list.find(',', i) - i));
					i = list.find(',', i);
				}
			}
		}
		cout << ((find(v.begin(), v.end(), name) != v.end()) ? "Ignore" : "Important!") << endl;
	}
	return 0;
}