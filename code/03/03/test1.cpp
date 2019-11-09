//·´×ª×Ö·û´®
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void ReverseString(string &s)
{
	int i, j;
	for (i = 0, j = s.size() - 1; i < j; i++, j--)
	{
		swap(s[i], s[j]);
	}
}

int main1()
{
	string s1("hello world");

	ReverseString(s1);
	cout << s1 << endl;

	system("pause");
	return 0;
}