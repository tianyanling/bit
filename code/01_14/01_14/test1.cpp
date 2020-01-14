#include<iostream>
#include<string>
using namespace std;

string toLowerCase(string str) 
{
	string tmp;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			tmp += str[i] + 32;
		}
		else 
		{
			tmp += str[i];
		}	
	}
	return tmp;
}

int main1()
{
	string str;

	while (getline(cin, str))
	{
		cout << toLowerCase(str) << endl;
	}
	system("pause");
	return 0;
}