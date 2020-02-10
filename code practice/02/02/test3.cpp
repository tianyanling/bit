#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

int main3()
{
	string s1;

	//在字符串末尾追加，相当于 +=
	//可以在字符串末尾追加n个字符
	s1.append("abcd");
	s1.append("efgh");
	s1 += "ijkl";

	s1.append(2, 'c');
	cout << s1 << endl;
	system("pause");
	return 0;
}