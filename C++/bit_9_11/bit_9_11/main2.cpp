#include<iostream>
#include<cstring>//C�����е�string
#include<string>//C++�е�string
using namespace std;

int main()
{
	//const string s1("Hello bit");
	string s1;
	s1 += "abc";
	s1 += "def";
 
	s1.append(2, 'c');
	cout << s1 << endl;


	/*
	//���ֱ�����ʽ
	for (size_t i = 0; i < s1.size(); i++)
	{
		cout << s1[i];
	}
	cout << endl;

	for (auto i = s1.begin(); i != s1.end(); i++)
	{
		cout << *i;
	}
	cout << endl;

	for (auto &i : s1)
	{
		cout << i;
	}
	cout << endl;
	*/
	system("pause");
	return 0;
}