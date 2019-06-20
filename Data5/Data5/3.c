#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<stdlib.h>
#include <malloc.h>

#define MAXSIZE 100

typedef char DataType;
typedef struct BiTNode	/* 二叉链表存储结构 */
{
	DataType data;
	struct BiTNode *LChild;
	struct BiTNode *RChild;
}BiTree;

typedef BiTree* ElemType;	/* 栈中数据元素类型，栈中保存结点指针 */
typedef struct
{
	ElemType  data[MAXSIZE];
	int top;
}SeqStack;					/* 栈的类型定义，顺序栈 */

void InitSeqStack(SeqStack *S) /* 初始化栈 */
{	 /* 首先建立栈空间，然后初始化栈顶指针 */
	S->top = -1;
}

void Push(SeqStack *S, ElemType x)
{
	if (S->top == MAXSIZE - 1)
	{ /* 栈满不能入栈 */
		printf("栈满\n");
	}
	S->top++;
	S->data[S->top] = x;
}

void Pop(SeqStack *S) 	/* 出栈，假设栈不空 */
{
	S->top--;
}

int Empty(SeqStack *S)
{
	if (S->top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

ElemType Top(SeqStack *S)  /* 设栈不空 */
{
	return (S->data[S->top]);
}

/* 递归算法创建二叉链表 */
BiTree *GreateBiTree()
{
	DataType ch;
	BiTree *bt;
	ch = getchar();
	if (ch == '.')
	{
		return NULL;
	}
	else 
	{
		bt = (BiTree *)malloc(sizeof(BiTree));
		bt->data = ch;
		bt->LChild = GreateBiTree();
		bt->RChild = GreateBiTree();
		return bt;
	}
}

int GetTop(SeqStack *S, ElemType *x)		//取栈顶元素
{
	if (S->top == -1)
	{
		return 0;
	}
	else
	{
		*x = S->data[S->top];
		return 1;
	}
}

void PreOrder(BiTree *p)	//先序遍历二叉树
{
	SeqStack S;
	InitSeqStack(&S);
	BiTree*cur = p;
	BiTree*top = NULL;
	while (cur!=NULL || !Empty(&S))
	{
		while(cur!=NULL)
		{
			printf("%c", cur->data);
			Push(&S, cur);
			cur=cur->LChild;
		}
		top = Top(&S);
		Pop(&S);
		cur = top->RChild;
	}
}

/* 中序遍历二叉树的非递归算法 */
void InOrder(BiTree *p)
{
	SeqStack S; 
	InitSeqStack(&S);
	BiTree*cur = p;
	//BiTree*top = NULL;
	while (cur !=NULL || !Empty(&S))
	{
		while (cur !=NULL) 
		{ 
			Push(&S, cur); 
			cur = cur->LChild; 
		}	/* 先将结点指针压栈，待出栈时再访问 */
			if (Empty(&S))
			{
				break;
			}
			cur = Top(&S);
			Pop(&S); 
			printf("%c", cur->data); 
			cur = cur->RChild;
	}
}

void PostOrder(BiTree *p)		//后序遍历二叉树
{
	BiTree *q;
	SeqStack S;
	q = NULL;
	BiTree*cur = p;
	InitSeqStack(&S);
	while (cur !=NULL || !Empty(&S))
	{
		if (cur != NULL)
		{
			Push(&S, cur);
			cur=cur->LChild;
		}
		else
		{
			GetTop(&S, &cur);
			if ((cur->RChild == NULL) || (cur->RChild == q))
			{
				printf("%c",cur->data);
				q = cur;
				Pop(&S);
				cur = NULL;
			}
			else
			{
				cur = cur->RChild;
			}
		}
	}
}

void menu()
{
	printf("\t***********************************\n");
	printf("\t***\t  0.退出系统          \t***\n");
	printf("\t***\t  1.创建二叉链表   \t***\n");
	printf("\t***\t  2.非递归先序遍历\t***\n");
	printf("\t***\t  3.非递归中序遍历\t***\n");
	printf("\t***\t  4.非递归后序遍历\t***\n");
	printf("\t***********************************\n");
	printf("\n");
	printf("请输入选项：");
}

int main()
{
	int n;
	int m = 1;
	BiTree *bt; 
	bt = NULL;
	while (m)
	{
		menu();
		scanf("%d", &n);
		getchar();
		switch (n)
		{
		case 0:
			m = 0;
			printf("退出！\n");
			break;
		case 1:
			printf("请输入结点的前序序列创建二叉树: (. 表示空)\n");
			bt=GreateBiTree();
			break;
		case 2:
			printf("非递归法先序遍历二叉树:");
			PreOrder(bt);
			printf("\n");
			break;
		case 3:
			printf("非递归法中序遍历二叉树");
			InOrder(bt);
			printf("\n");
			break;
		case 4:
			printf("非递归法后序遍历二叉树");
			PostOrder(bt);
			printf("\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	}
	system("pause");
	return 0;
}