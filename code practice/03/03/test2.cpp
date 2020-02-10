//找字符串中第一个只出现一次的字符,假设只存在小写字符
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int firstUniqChar(string s)
{
	int count[26] = { 0 };//count[]用来统计各个字符的个数
	for (auto &ch : s)
	{
		count[ch - 'a']++;
	}

	//统计出现字符的个数
	/*int j = 0;
	for (auto & i : count)
	{
		cout << (char)('a' + (j++)) << ' ' << i << endl;
	}*/

	for (int i = 0; i < s.size();i++)
	{
		if (count[s[i] - 'a'] == 1)
		{
			return i;//返回下标
		}
	}
	return -1;
}

int main2()
{
	string s;

	cin >> s;

	cout << firstUniqChar(s) << endl;
	system("pause");
	return 0;
}