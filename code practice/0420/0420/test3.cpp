//https://leetcode-cn.com/problems/longest-substring-without-repeating-characters/
#include  <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

int lengthOfLongestSubstring(string s)
{
		if (s.size() == 0) 
			return 0;
		unordered_set<char> lookup;
		int maxStr = 0;
		int left = 0;
		for (int i = 0; i < s.size(); i++)
		{
			while (lookup.find(s[i]) != lookup.end())
			{
				lookup.erase(s[left]);
				left++;
			}
			maxStr = max(maxStr, i - left + 1);
			lookup.insert(s[i]);
		}
		return maxStr;
}

int main3()
{
	string s = "abcabcbb";
	cout << lengthOfLongestSubstring(s) << endl;
	system("pause");
	return 0;
}