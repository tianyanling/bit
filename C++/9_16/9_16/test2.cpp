//string 类
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main11()
{
	string s1;
	char str[1000] = { 0 };
	scanf("%[^\n]", str);
	cout << str;
	system("pause");
	return 0;
}

//string类的模拟实现