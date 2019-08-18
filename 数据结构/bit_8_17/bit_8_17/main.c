//二叉树的链式
#define _CRT_SECURE_NO_WARNINGS 1

#include"BTree.h"
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n = 0;
	int m = 0;
	int s = 0;

	BTNode * root = BinaryTreeCreate("ABD#GI##J###CE#HK###F##");//需要已知前序遍历

	BinaryTreePrevOrder(root);
	putchar('\n');
	BinaryTreeInOrder(root);
	putchar('\n');
	BinaryTreePostOrder(root);
	putchar('\n');
	n = BinaryTreeLeafSize(root);
	printf("%d\n", n);
	m = BinaryTreeSize(root);
	printf("%d\n", m);
	s = BinaryTreeFind(root, 1);
	printf("%c\n", s);
	system("pause");
	return 0;
}

//