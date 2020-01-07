////第一个只出现一次的字符
////https://www.nowcoder.com/questionTerminal/1c82e8cf713b4bbeb2a5b31cf5b0417c?f=discussion
//
////思路：使用map来计数，输出第一个次数为1的字符
//#include<iostream>
//#include<string>
//#include<map>
//using namespace std;
//
//int FirstNotRepeatingChar(string str) 
//{
//	map<char, int> mp;
//	for (int i = 0; i < str.size(); ++i)
//	{
//		mp[str[i]]++;
//	}
//
//	for (int i = 0; i < str.size(); i++)
//	{
//		if (mp[str[i]] == 1)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
//int main1()
//{
//	string str = "abcdaceedfgf";
//
//	cout << FirstNotRepeatingChar(str) << endl;
//	system("pause");
//	return 0;
//}