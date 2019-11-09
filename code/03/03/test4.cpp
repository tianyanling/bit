//验证一个字符串是否是回文
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//处理字符串，去掉非数字和字符的其他字符
bool isLetterOrNumber(char ch)
{
	return  (ch >= 'a' && ch <= 'z') ||
				(ch >= '0' && ch <= '9') ||
				(ch >= 'A' && ch <= 'Z');
}

//处理大小写字符
bool isSame(char a, char b)
{
	return a == b ||  //处理数字
		(a | 1 << 5) == (b | 1 << 5);//处理非数字的部分，将大写字母转化为小写字母
	//1左移5:0000 0001 ==》 0010 0000
	//大写字母A的ASCII码：65 ==》0100 0001
	//小写字母a的ASCII码：97==》0110 0001
	//结果：大写字母转化为小写字母
}

bool isPalindrome(string s)
{
	string tmp;

	for (auto &ch : s)
	{
		if (isLetterOrNumber(ch))
		{
			tmp.push_back(ch);
		}
	}

	int i, j;
	for (i= 0,j=tmp.size() -1;i<j;i++,j--)
	{
		if (! isSame(tmp[i], tmp[j]))
		{
			return false;
		}
	}
	return true;
}

int main4()
{
	//string s("A man, a plan, a canal : Panama");
	string s("abcdf");
	cout << isPalindrome(s) << endl;
	system("pause");
	return 0;
}