#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string s1;
	string s2;
	int maxcount = 0;
	while (cin >> s1 >> s2)
	{
		for (int i = 0; i < s1.size(); i++)
		{
			for (int j = s1.size(); j >= 0; j--)
			{
				if (s2.find(s1.substr(i, j - i)) != -1 && maxcount <(j-i))
				{
					maxcount = j - i;
				}
			}
		}
		cout << maxcount<< endl;
	}
	system("pause");
	return 0;
}