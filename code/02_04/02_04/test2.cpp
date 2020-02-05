//Ñ¹Ëõ×Ö·û´®
//https://leetcode-cn.com/problems/string-compression/
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int compress(vector<char>& chars)
{
	int len = 0;
	for (int i = 0,count = 1; i < chars.size(); i++, count++)
	{
		if (i + 1 == chars.size() || chars[i] != chars[i + 1])
		{
			chars[len++] = chars[i];
			if (count > 1)
			{
				for (char ch : to_string(count))
				{
					chars[len++] = ch;
				}
			}
			count = 0;
		}
	}
		return len;
}

int main()
{
	vector<char> chars;

	chars.push_back('a');
	chars.push_back('b');
	chars.push_back('b');
	chars.push_back('b');
	chars.push_back('c');
	chars.push_back('c');
	chars.push_back('c');
	chars.push_back('c');
	chars.push_back('d');

	cout << compress(chars) << endl;
	system("pause");
	return 0;
}