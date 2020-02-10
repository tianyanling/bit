//电话号码的字母组合
//https://leetcode-cn.com/problems/letter-combinations-of-a-phone-number/
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

namespace _tmp
{
	string numLetter[] = { "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
}

void dealLetterCombinations(string &digits,size_t pos,vector<string> &alldata)
{
	static string res = digits;

	if (pos < digits.size())
	{
		for (auto &i : _tmp::numLetter[digits[pos] - '2'])
		{
			res[pos] = i;
			dealLetterCombinations(digits, pos + 1, alldata);
		}
	}
	else
	{
		cout << res << endl;
		alldata.push_back(res);
	}
}

vector<string> letterCombinations(string digits)
{
	vector<string> res;

	dealLetterCombinations(digits, 0, res);
	return res;
}

int main7()
{
	string digits = "2333";

	vector<string> data = letterCombinations(digits);
	system("pause");
	return 0;
}