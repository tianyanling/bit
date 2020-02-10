//最后一个单词的长度
//给定一个仅包含大小写字母和空格 ' ' 的字符串 s，返回其最后一个单词的长度。
//如果字符串从左向右滚动显示，那么最后一个单词就是最后出现的单词。
//如果不存在最后一个单词，请返回 0
#include<iostream>
#include<string>
using namespace std;

int lengthOfLastWord(string s) 
{
	int count = 0;
	int i = s.size() - 1;

	while (i >= 0 && s[i] == ' ')
	{
		i--;
	}

	while (i >= 0 && s[i] != ' ')
	{
		i--;
		count++;
	}
	return count;
}

int main()
{
	string s = "a aa";

	cout << lengthOfLastWord(s) << endl;
	system("pause");
	return 0;
}