#define _CRT_SECURE_NO_WARNINGS 1

#include"BTree.h"
#include"queue.h"
#include"stack.h"
#include<stdio.h>
#include<stdlib.h>

//����ǰ�����д��������
BTNode* BinaryTreeCreate(BTDataType* src)
{
	static int s_n = 0;//ȫ�ֱ��������þ�̬������ʾ����̬�����ĺ���ֲ��ɼ���ȫ�ֱ���
	if (src[s_n] == '#')
	{
		s_n++;
		return NULL;//�������#��˵�����ĺ���Ϊ�գ���ֱ�ӷ���
	}

	BTNode *cur = (BTNode *)malloc(sizeof(BTNode));//����һ�����
	cur->data = src[s_n];
	s_n++;

	cur->lchild = BinaryTreeCreate(src);//�ݹ飬���ӱ�����֮���ٱ����Һ���
	cur->rchild = BinaryTreeCreate(src);

	return cur;
}

//���٣����ú������٣���򵥣�
void BinaryTreeDestory(BTNode* root)
{
	if (root)
	{
		BinaryTreeDestory(root->lchild);
		BinaryTreeDestory(root->rchild);
		free(root);
	}
}

//Ҷ�ӽ��ĸ���
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

//���н��ĸ���
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

//��k����ĸ���
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

// �ݹ����
//ǰ�����
void BinaryTreePrevOrder(BTNode* root)
{
	if (root)//���rootΪ�գ�����Ҫ�����������Һ���
	{
		putchar(root->data);
		BinaryTreePrevOrder(root->lchild);
		BinaryTreePrevOrder(root->rchild);
	}
}

//�������
void BinaryTreeInOrder(BTNode* root)
{
	if (root)
	{
		BinaryTreeInOrder(root->lchild);
		putchar(root->data);
		BinaryTreeInOrder(root->rchild);
	}
}

//�������
void BinaryTreePostOrder(BTNode* root)
{
	if (root)
	{
		BinaryTreePostOrder(root->lchild);
		BinaryTreePostOrder(root->rchild);
		putchar(root->data);
	}	
}

// �ǵݹ����
// �������
void BinaryTreeLevelOrder(BTNode* root)

{
	Queue qu;
	BTNode * cur;

	QueueInit(&qu);

	QueuePush(&qu, root);//ͷ������

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
// �ж϶������Ƿ�����ȫ������
int BinaryTreeComplete(BTNode* root);

//�ǵݹ��������
void BinaryTreePrevOrderNonR(BTNode* root)
{
	Stack st;
	BTNode * cur = root;

	StackInit(&st, 100);

	while (cur)
	{
		putchar(cur->data);

		if (cur->rchild)//������Һ��Ӿͽ�ջ
		{
			StackPush(&st, cur->rchild);
		}

		if (cur->lchild)//��������Ӿ�ֱ���������
		{
			cur = cur->lchild;
		}
		else//���û�����ӣ�ջ��Ԫ�س�ջ
		{
			cur = StackTop(&st);
			StackPop(&st);
		}
	}
	StackDestory(&st);
}

//�ǵݹ��������
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