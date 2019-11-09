//字符串里面最后一个单词的长度
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main3()
{
	string s;
	getline(cin, s);//此处不能用cin直接输入字符串，遇到空格就会输出，用getline避免这个问题

	int pos = s.rfind(' ');
	
	cout << s.size() - pos - 1 << endl;
	system("pause");
	return 0;
}