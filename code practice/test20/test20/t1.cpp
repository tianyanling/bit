#include<iostream>
#include<string>
using namespace std;

int main1()
{
	string s;

	while (getline(cin, s))
	{
		for (int i = s.size() - 1; i >= 0; i--)
		{
			cout << s[i];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}