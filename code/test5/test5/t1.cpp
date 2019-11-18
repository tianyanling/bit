//统计回文数
//将B字符串插入到A字符串中。判断新的字符串是否为回文，并统计是回文的个数
#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string &s)//判断字符串是否回文
{
	int i;
	for (i = 0;i<s.size()/2;i++)
	{
		if (s[i] != s[s.size() - i - 1])
		{
			return false;
		}
	}
	return true;
}

int main1()
{
	string s1;
	string s2;
	string s;

	while (cin >> s1 >> s2)
	{
		int count = 0;
		s = s1;
		int len = s1.size() + 1;
		for (int i = 0; i < len; i++)
		{
			s1 = s;
			s1.insert(i, s2);
			if (isPalindrome(s1))
			{
				count++;
			}
		}
		cout << count << endl;
	}

	system("pause");
	return 0;
}