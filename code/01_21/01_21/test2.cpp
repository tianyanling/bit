//仅仅反转字母
//https://leetcode-cn.com/problems/reverse-only-letters/submissions/
#include<iostream>
#include<string>
using namespace std;

string reverseOnlyLetters(string S) 
{
	int  i = 0;
	int j = S.size() - 1;

	while (i < j)
	{
		while (i < j && !isalpha(S[i]))  //isalpha()函数是判断一个字符是否是一个字母（包括大小写）
		{
			i++;
		}

		while (i < j && !isalpha(S[j]))
		{
			j--;
		}

		if (i < j)
		{
			swap(S[i], S[j]);
			i++;
			j--;
		}
	}
	return S;
}

int main()
{
	string s = "abcd--de";

	cout << reverseOnlyLetters(s) << endl;
	system("pause");
	return 0;
}