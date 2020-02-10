#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

int main2()
{
	string s1("hello");

	s1.resize(9);
	s1.push_back('a');

	//c_str 返回c格式的字符串
	cout << typeid(s1).name() << endl;
	cout << typeid(s1.c_str()).name() << endl;

	cout << s1.c_str() << endl;//看到尾0结束

	//三种遍历方式
	//1、for + operator[]
	for (size_t i = 0; i < s1.size(); i++)
	{
		cout << s1[i];
	}
	cout << endl;

	//2、迭代器
	for (auto i = s1.begin(); i != s1.end(); i++)
	{
		cout << *i;
	}
	cout << endl;

	//3、范围for
	for (auto &i : s1)
	{
		cout << i;
	}
	cout << endl;

	//直接打印字符串的内容
	cout << s1 << endl;

	system("pause");
	return 0;
}