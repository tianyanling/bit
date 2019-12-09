//查找两个字符串a,b的最长公共子串

//题目：查找两个字符串a,b的最长公共子串，如有多个，，则输出较短字符串最先出现的那个

//思路：首先判断两个字符串的长度，然后遍历两个字符串查找公共字符，使其相同字符存在一个临时字符串中
//此时还需要另外一个临时字符串来比较每段相同字符串的大小，将最大公共字符串存在tmp中，并返回输出

#include<iostream>
#include<string>
using namespace std;

string maxString(string s1, string s2)
{
	string tmp = "";
	
	for (int i =0; i<s1.size();i++)
	{
		string ret = "";
		for (int j = 0; j < s2.size(); j++)
		{
			int k = i;//为了遍历s1，本次共同字符串比较完之后，下次s1的遍历其实位置还是i
			
			while (s1[k] == s2[j])
			{
				ret += s1[k];
				k++;
				j++;
			}
			if (ret.size() > tmp.size())
			{
				tmp = ret;
			}
			ret = "";
		}	
	}
	return tmp;
}

int main()
{
	string s1;
	string s2;

	while (cin >> s1 >> s2)
	{
		if (s1.size() > s2.size())
		{
			swap(s1, s2);
		}
		cout << maxString(s1, s2);
	}
	system("pause");
	return 0;
}