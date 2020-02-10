//赎金信
//给定一个赎金信 (ransom) 字符串和一个杂志(magazine)字符串，判断第一个字符串ransom能不能由第二个字符串magazines里面的字符构成。
//如果可以构成，返回 true ；否则返回 false。

//(题目说明：为了不暴露赎金信字迹，要从杂志上搜索各个需要的字母，组成单词来表达意思。)
#include<iostream>
#include<string>
#include<map>
using namespace std;

bool canConstruct(string ransomNote, string magazine) 
{
	map<char, int> mp;

	if (ransomNote.size() > magazine.size())
	{
		return false;
	}

	for (size_t i = 0; i < magazine.size(); i++)//统计magzine字符串中各个字母出现的次数
	{
		mp[magazine[i]]++;
	}

	for (size_t j = 0; j < ransomNote.size(); j++)//ransomNote出现的字母在map中减去
	{
		mp[ransomNote[j]]--;

		if (mp[ransomNote[j]] < 0)//若做减法之后小于0，说明ransomNote字符串中该字母的个数比magazine字符串中字母个数多，即不能组成
		{
			return false;
		}
	}
	return true;
}

int main1()
{
	string ransomNote = "bg";
	string magazine = "efjbdfbdgfjhhaiigfhbaejahgfbbgbjagbddfgdiaigdadhcfcj";

	cout << canConstruct(ransomNote, magazine) << endl;
	system("pause");
	return 0;
}