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

// 层序遍历
void BinaryTreeLevelOrder(BTNode* root)

{
	Queue qu;
	BTNode * cur;

	QueueInit(&qu);

	QueuePush(&qu, root);//头结点入队

	while (!QueueIsEmpty(&qu))//队列为空时，跳出循环
	{
		cur = QueueTop(&qu);//取出队头结点

		putchar(cur->data);

		if (cur->lchild)//有左孩子，左孩子就入队
		{
			QueuePush(&qu, cur->lchild);
		}

		if (cur->rchild)//有右孩子，右孩子就入队
		{
			QueuePush(&qu, cur->rchild);
		}

		QueuePop(&qu);//队首元素出队
	}

	QueueDestory(&qu);//有初始化就有销毁
}

// 判断二叉树是否是完全二叉树
int BinaryTreeComplete(BTNode* root)
{
	Queue qu;
	BTNode * cur;
	int tag = 0;

	QueueInit(&qu);

	QueuePush(&qu, root);

	while (!QueueIsEmpty(&qu))
	{
		cur = QueueTop(&qu);

		putchar(cur->data);

		if (cur->rchild && !cur->lchild)
		{
			return 0;
		}

		if (tag && (cur->rchild || cur->lchild))
		{
			return 0;
		}

		if (cur->lchild)
		{
			QueuePush(&qu, cur->lchild);
		}

		if (cur->rchild)
		{
			QueuePush(&qu, cur->rchild);
		}
		else
		{
			tag = 1;
		}

		QueuePop(&qu);
	}

	QueueDestory(&qu);
	return 1;
}

//非递归先序遍历
void BinaryTreePrevOrderNonR(BTNode* root)
{
	Stack st;
	BTNode * cur = root;//从根开始

	StackInit(&st, 100);

	while (cur)
	{
		putchar(cur->data);//访问当前结点

		if (cur->rchild)//如果有右孩子就进栈
		{
			StackPush(&st, cur->rchild);
		}

		if (cur->lchild)//如果有左孩子就访问左孩子
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
	BTNode * cur = root;

	Stack st;
	StackInit(&st, 100);

	while (cur || !StackIsEmpty(&st))
	{
		for (; cur; cur = cur->lchild)//将当前结点及他的左孩子们入栈
		{
			StackPush(&st, cur);
		}

		cur = StackTop(&st);
		//1、如果右孩子为空，for循环不进，直接取栈顶
		//2、如果右孩子不为空，那么这是一个没有左孩子的二叉树
		//第一种情况为左子树访问完毕，第二种情况是左子树为空，无论是哪一种情况，当前结点都要打印
		putchar(cur->data);
		StackPop(&st);
		cur = cur->rchild;//当右子树为空时，检查栈
	}

	StackDestory(&st);
}

void BinaryTreePostOrderNonR(BTNode* root)
{
	char tag[64];

	BTNode * cur = root;

	Stack st;
	StackInit(&st, 100);

	do{
		for (; cur; cur = cur->lchild)//类似中序
		{
			StackPush(&st, cur);
			tag[st.size - 1] = 0;//重置左子树的访问标记（LT）
		}

		while (!StackIsEmpty(&st) && tag[st.size - 1])//前面的条件只在最后一次循环跳出的时候生效
		{
			cur = StackTop(&st);
			putchar(cur->data);
			StackPop(&st);
		}

		if (!StackIsEmpty(&st))
		//此条件只在最后一次循环跳出的时候生效
		//后面的条件分两个情况
		//1、当此次的cur为空时，上面的for不进，此条件成立
		//2、当cur不为空时，上面的for进，此条件不成立
		//当检测到当前的LT被置位（情况1），那么打印当前节点后，再去直接检查上一个结点（父节点）是不是也要被打印了，
		{
			cur = StackTop(&st);
			//1、如果上面的while进了，那么证明左子树访问完毕
			//2、如果上面的while每进，那么证明没有左子树
			tag[st.size - 1] = 1;
			cur = cur->rchild;
			//左子树访问完毕后，访问右子树
		}
	} while (!StackIsEmpty(&st));//由于后序遍历根结点是左后出栈的，所以在根结点出栈前，栈不可能为空，所以栈空为循环跳出条件

	StackDestory(&st);
}
void TestBinaryTree();