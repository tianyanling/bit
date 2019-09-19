#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

void reverseOneWord(string &s, int spos, int epos)
{
	int i, j;

	for (i = spos, j = epos - 1; i < j; i++, j--)
	{
		swap(s[i], s[j]);
	}
}

string reverseWords(string s)
{
	int spos = 0;
	int epos = s.find(' ');

	while (epos >= 0)
	{
		reverseOneWord(s, spos, epos);
		spos = epos + 1;
		epos = s.find(' ', spos);
	}
	reverseOneWord(s, spos, s.size());
	return s;
}


int main1()
{
	cout << reverseWords("I'm so happy!") << endl;

	system("pause");

	return 0;
}