#define _CRT_SECURE_NO_WARNINGS 1

#include"BTree.h"
#include"queue.h"
#include"stack.h"
#include<stdio.h>
#include<stdlib.h>

//根据前序遍历写出二叉树
BTNode* BinaryTreeCreate(BTDataType* src)
{
	static int s_n = 0;//全局变量可以用静态变量表示，静态变量的含义局部可见的全局变量
	if (src[s_n] == '#')
	{
		s_n++;
		return NULL;//如果遇到#，说明他的孩子为空，就直接返回
	}

	BTNode *cur = (BTNode *)malloc(sizeof(BTNode));//申请一个结点
	cur->data = src[s_n];
	s_n++;

	cur->lchild = BinaryTreeCreate(src);//递归，左孩子遍历完之后再遍历右孩子
	cur->rchild = BinaryTreeCreate(src);

	return cur;
}

//销毁，采用后序销毁（最简单）
void BinaryTreeDestory(BTNode* root)
{
	if (root)
	{
		BinaryTreeDestory(root->lchild);
		BinaryTreeDestory(root->rchild);
		free(root);
	}
}

//叶子结点的个数
int BinaryTreeLeafSize(BTNode* root)
{
	static int size = 0;

	if (root)
	{
		BinaryTreeLeafSize(root->lchild);
		BinaryTreeLeafSize(root->rchild);

		if (root->lchild == 0 && root->rchild == 0)
		{
			size++;
		}
	}
	return size;
}

//所有结点的个数
int BinaryTreeSize(BTNode* root)
{
	static int count = 0;
	
	if (root)
	{
		BinaryTreeSize(root->lchild);
		BinaryTreeSize(root->rchild);

		if ((root->lchild != 0) || (root->rchild != 0) || (root->lchild == 0 && root->rchild == 0));
		count++;
	}
	return count;
}

//第k层结点的个数
//int BinaryTreeLevelKSize(BTNode* root, int k)
//{
//	if (root)
//	{
//		BinaryTreeLevelKSize(root->lchild,k);
//		BinaryTreeLevelKSize(root->rchild, k);
//	}
//
//	int i;
//	for (i = 0; i < k; i++)
//	{
//		if ()
//	}
//}
//
//
//int BinaryTreeFind(BTNode* root, BTDataType x)
//{
//	if (root ==NULL)
//	{
//		return;
//	}
//	if (root->data == x)
//	{
//		return root;
//	}
//	if (x > root->data)
//	{
//		return BinaryTreeFind(&root->rchild, x);
//	}
//	else
//	{
//		return BinaryTreeFind(&root->lchild, x);
//	}
//}

// 递归遍历
//前序遍历
void BinaryTreePrevOrder(BTNode* root)
{
	if (root)//如果root为空，则不需要遍历它的左右孩子
	{
		putchar(root->data);
		BinaryTreePrevOrder(root->lchild);
		BinaryTreePrevOrder(root->rchild);
	}
}

//中序遍历
void BinaryTreeInOrder(BTNode* root)
{
	if (root)
	{
		BinaryTreeInOrder(root->lchild);
		putchar(root->data);
		BinaryTreeInOrder(root->rchild);
	}
}

//后序遍历
void BinaryTreePostOrder(BTNode* root)
{
	if (root)
	{
		BinaryTreePostOrder(root->lchild);
		BinaryTreePostOrder(root->rchild);
		putchar(root->data);
	}	
}

// 非递归遍历
// 层序遍历
void BinaryTreeLevelOrder(BTNode* root)

{
	Queue qu;
	BTNode * cur;

	QueueInit(&qu);

	QueuePush(&qu, root);//头结点入队

	while (!QueueIsEmpty(&qu))
	{
		cur = QueueTop(&qu);

		putchar(cur->data);

		if (cur->lchild)
		{
			QueuePush(&qu, cur->lchild);
		}

		if (cur->rchild)
		{
			QueuePush(&qu, cur->rchild);
		}

		QueuePop(&qu);
	}

	QueueDestory(&qu);
}
// 判断二叉树是否是完全二叉树
int BinaryTreeComplete(BTNode* root);

//非递归先序遍历
void BinaryTreePrevOrderNonR(BTNode* root)
{
	Stack st;
	BTNode * cur = root;

	StackInit(&st, 100);

	while (cur)
	{
		putchar(cur->data);

		if (cur->rchild)//如果有右孩子就进栈
		{
			StackPush(&st, cur->rchild);
		}

		if (cur->lchild)//如果有左孩子就直接输出左孩子
		{
			cur = cur->lchild;
		}
		else//如果没有左孩子，栈顶元素出栈
		{
			cur = StackTop(&st);
			StackPop(&st);
		}
	}
	StackDestory(&st);
}

//非递归中序遍历
void BinaryTreeInOrderNonR(BTNode* root)
{
	BTNode* cur = root;
	Stack st;
	StackInit(&st, 100);

	while (1)
	{
		for ( ; cur; cur = cur->lchild)
		{
			StackPush(&st, cur);
		}

		cur = StackTop(&st);
		if (!cur)
		{
			break;
		}
		putchar(cur->data);
		StackPop(&st);
		cur = cur->rchild;
	}
	StackDestory(&st);
}

void BinaryTreePostOrderNonR(BTNode* root);
void TestBinaryTree();