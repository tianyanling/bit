//��ϰ��
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//��תһ���ַ���
void reverseString(string &s)
{
	int i, j;
	for (i = 0, j = s.size() - 1; i < j; i++,j--)
	{
		swap(s[i], s[j]);
	}
}

int main1()
{
	string s1("abcd");
	reverseString(s1);
	cout << s1 << endl;
	system("pause");
	return 0;
}

//���ַ�����ֻ����һ�ε��ַ�
int firstUniqChar(string s)
{
	int count[26] = { 0 };
	for (auto & ch : s)
	{
		count[ch - 'a']++;
	}

	/*int j = 0;
	for (auto & i : count)
	{
		cout << (char)('a' + j++) << " " << i << endl;
	}*/
	for (int i = 0; i < s.size(); i++)
	{
		if (count[s[i]-'a'] == 1)
		{
			return i;//�����±�
		}
	}
	return -1;
}

int main2()
{
	string s;
	cin >> s;
	cout<<firstUniqChar(s);
	system("pause");
	return 0;
}

//�ַ����������һ�����ʵĳ���
int main3()
{
	string line;
	//cin>>line  �����ո�ͽ�����Ӧ����getline(cin,line)
	while (getline(cin, line))
	{
		size_t pos = line.rfind(' ');
		cout << line.size() - pos - 1 << endl;
	}
	system("pause");
	return 0;
}

bool isLetterOrNumber(char ch)
{
	return  (ch >= 'a' && ch <= 'z') ||
				(ch >= 'A' && ch <= 'Z') ||
				(ch >= '0' && ch <= '9');

}

bool isSame(char a, char b)
{
	return a == b ||
		(a | 1 << 5) == (b | 1 << 5);//����д��ĸת��ΪСд��ĸ��
}

bool isPalindrome(string s)
{
	string tmp;
	int i, j;

	for (auto & ch : s)
	{
		if (isLetterOrNumber(ch))
		{
			tmp.push_back(ch);
		}
	}

	for (i = 0, j = tmp.size() - 1; i < j; i++, j--)
	{
		if (!isSame(tmp[i], tmp[j]))
		{
			return false;
		}
	}
	return true;
}

//��֤һ���ַ����Ƿ��ǻ���
int main4()
{
	string s("A man,a plan a canal:Panama");
	//string s("asd");
	cout << isPalindrome(s) << endl;
	system("pause");
	return 0;
}

