#include"seqlist.h"
#include<iostream>
using namespace std;
 
int main()
{
SeqList<int> s1;

	s1.push_back(6);
	s1.push_back(7);

	cout << s1.size() << endl;
	system("pause");
	return 0;
}