#pragma once
#include<iostream>
#include<string>
#include<boost/multiprecision/cpp_int.hpp>
using namespace std;

class BigInt
{
	string m_number;
	//����ͨ�����ַ�����ʾ
	string add(string num1, string num2);
	string sub(string num1, string num2);
	string mul(string num1, string num2);
	pair<string,string> dev(string num1, string num2);//�����̺�����
	bool less(string & num1, string & num2);
public:
	BigInt()
	{
	}
	BigInt(const string &num);
	BigInt(const int num);
	BigInt operator +(BigInt &bi);
	BigInt operator - (BigInt &bi);
	BigInt operator * (BigInt &bi);
	BigInt operator / (BigInt &bi);
	BigInt operator %(BigInt &bi);
	friend ostream& operator <<(ostream & _cout, BigInt &bi);

	BigInt& operator +=(BigInt &bi);
	BigInt& operator -= (BigInt &bi);
	BigInt& operator *= (BigInt &bi);
	BigInt& operator /=(BigInt &bi);
	BigInt& operator %=(BigInt &bi);

	BigInt& operator ++();//++i
	BigInt& operator ++(int);//i++

	BigInt& operator --();//--i
	BigInt& operator --(int);//i--
};