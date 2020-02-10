//É¾³ý¹«¹²×Ö·û
#include<iostream>
#include<string>
using namespace std;

int main2()
{
	string s1;
	string s2;

	getline(cin,s1);
	getline(cin, s2);

	for (int i=0;i<s1.size();i++)
	{
		if (s2.find(s1[i]) == -1)
		{
			cout << s1[i];
		}
	}
	cout << endl;

	system("pause");
	return 0;
}