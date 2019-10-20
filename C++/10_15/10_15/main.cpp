#include<iostream>
#include"binarytree.h"
using namespace std;

int main()
{
	tdd::Tree<char> tr("ABD##E##CFH##I##G##",'#');

	tr.pre_order();
	cout << endl;

	tr.in_order();
	cout << endl;

	tr.post_order();
	cout << endl;

	tr.test1();
	cout << endl;

	system("pause");
	return 0;
}