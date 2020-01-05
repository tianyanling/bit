#include<iostream>
#include"hashTable.h"
using namespace std;

int main()
{
	tdd::hashTable<string, int, tdd::dealString> ht;

	ht.insert(pair<string,int>("abc", 1));
	ht.insert(pair<string, int>("def", 2));
	ht.insert(pair<string, int>("ghi", 3));
	ht.insert(pair<string, int>("jkl", 4));

	system("pasue");
	return 0;
}
