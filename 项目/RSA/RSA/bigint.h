#pragma once
#include<iostream>
#include<string>
using namespace std;

class BigInt
{
	//����ͨ�����ַ�����ʾ
public:
	BigInt()
	{
	}
	string add(string num1, string num2);
	string sub(string num1, string num2);
	string mul(string num1, string num2);
	pair<string,string> dev(string num1, string num2);//�����̺�����
//public:
	BigInt(const string &num);
	BigInt(const int num);
};