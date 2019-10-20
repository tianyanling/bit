#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;

void filetest()
{
	ifstream ifs("1.txt");
	char str[20];

	ifs.getline(str, 20);

	cout << str;

	ifs.close;
}

void stringtest()
{
	ostringstream oss;

	oss << "hello world!";
}

int main()
{

	system("pause");
	return 0;
}