#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string str1, str2;
	while (cin >> str1>>str2)
	{
		vector<vector<int>> v(str1.size() + 1, vector<int>(str2.size() + 1,0));
		for (int i = 1; i <= str1.size(); i++)
		{
			for (int j = 1; j <= str2.size(); j++)
			{
				if (str1[i - 1] == str2[j - 1])
				{
					v[i][j] = v[i - 1][j - 1] + 1;
				}
				else
				{
					v[i][j] = v[i - 1][j]>v[i][j - 1] ? v[i - 1][j] : v[i][j - 1];
				}
			}
		}
		cout <<v[str1.size()][str2.size()]<< endl;
	}
	system("pause");
	return 0;
}