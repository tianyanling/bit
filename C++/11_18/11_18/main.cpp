#include"binarySortTree.h"
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	tdd::BinarySortTree<int> bst;

	bst.insert(5);
	bst.insert(2);
	bst.insert(8);
	bst.insert(6);
	bst.insert(4);
	bst.insert(7);
	bst.insert(1);

	system("pause");
	return 0;
}