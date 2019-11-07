#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

int main2()
{
	string s1("hello");

	s1.resize(9);
	s1.push_back('a');

	//c_str ����c��ʽ���ַ���
	cout << typeid(s1).name() << endl;
	cout << typeid(s1.c_str()).name() << endl;

	cout << s1.c_str() << endl;//����β0����

	//���ֱ�����ʽ
	//1��for + operator[]
	for (size_t i = 0; i < s1.size(); i++)
	{
		cout << s1[i];
	}
	cout << endl;

	//2��������
	for (auto i = s1.begin(); i != s1.end(); i++)
	{
		cout << *i;
	}
	cout << endl;

	//3����Χfor
	for (auto &i : s1)
	{
		cout << i;
	}
	cout << endl;

	//ֱ�Ӵ�ӡ�ַ���������
	cout << s1 << endl;

	system("pause");
	return 0;
}