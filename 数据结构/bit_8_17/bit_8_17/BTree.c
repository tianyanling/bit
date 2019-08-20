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

// �������
void BinaryTreeLevelOrder(BTNode* root)

{
	Queue qu;
	BTNode * cur;

	QueueInit(&qu);

	QueuePush(&qu, root);//ͷ������

	while (!QueueIsEmpty(&qu))//����Ϊ��ʱ������ѭ��
	{
		cur = QueueTop(&qu);//ȡ����ͷ���

		putchar(cur->data);

		if (cur->lchild)//�����ӣ����Ӿ����
		{
			QueuePush(&qu, cur->lchild);
		}

		if (cur->rchild)//���Һ��ӣ��Һ��Ӿ����
		{
			QueuePush(&qu, cur->rchild);
		}

		QueuePop(&qu);//����Ԫ�س���
	}

	QueueDestory(&qu);//�г�ʼ����������
}

// �ж϶������Ƿ�����ȫ������
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

//�ǵݹ��������
void BinaryTreePrevOrderNonR(BTNode* root)
{
	Stack st;
	BTNode * cur = root;//�Ӹ���ʼ

	StackInit(&st, 100);

	while (cur)
	{
		putchar(cur->data);//���ʵ�ǰ���

		if (cur->rchild)//������Һ��Ӿͽ�ջ
		{
			StackPush(&st, cur->rchild);
		}

		if (cur->lchild)//��������Ӿͷ�������
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
	BTNode * cur = root;

	Stack st;
	StackInit(&st, 100);

	while (cur || !StackIsEmpty(&st))
	{
		for (; cur; cur = cur->lchild)//����ǰ��㼰������������ջ
		{
			StackPush(&st, cur);
		}

		cur = StackTop(&st);
		//1������Һ���Ϊ�գ�forѭ��������ֱ��ȡջ��
		//2������Һ��Ӳ�Ϊ�գ���ô����һ��û�����ӵĶ�����
		//��һ�����Ϊ������������ϣ��ڶ��������������Ϊ�գ���������һ���������ǰ��㶼Ҫ��ӡ
		putchar(cur->data);
		StackPop(&st);
		cur = cur->rchild;//��������Ϊ��ʱ�����ջ
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
		for (; cur; cur = cur->lchild)//��������
		{
			StackPush(&st, cur);
			tag[st.size - 1] = 0;//�����������ķ��ʱ�ǣ�LT��
		}

		while (!StackIsEmpty(&st) && tag[st.size - 1])//ǰ�������ֻ�����һ��ѭ��������ʱ����Ч
		{
			cur = StackTop(&st);
			putchar(cur->data);
			StackPop(&st);
		}

		if (!StackIsEmpty(&st))
		//������ֻ�����һ��ѭ��������ʱ����Ч
		//������������������
		//1�����˴ε�curΪ��ʱ�������for����������������
		//2����cur��Ϊ��ʱ�������for����������������
		//����⵽��ǰ��LT����λ�����1������ô��ӡ��ǰ�ڵ����ȥֱ�Ӽ����һ����㣨���ڵ㣩�ǲ���ҲҪ����ӡ�ˣ�
		{
			cur = StackTop(&st);
			//1����������while���ˣ���ô֤���������������
			//2����������whileÿ������ô֤��û��������
			tag[st.size - 1] = 1;
			cur = cur->rchild;
			//������������Ϻ󣬷���������
		}
	} while (!StackIsEmpty(&st));//���ں�����������������ջ�ģ������ڸ�����ջǰ��ջ������Ϊ�գ�����ջ��Ϊѭ����������

	StackDestory(&st);
}
void TestBinaryTree();