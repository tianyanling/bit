#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 100
#define FALSE 0
#define TURE 1

typedef char DataType;
typedef struct Node		
{
	DataType data;
	struct Node *LChild;
	struct Node *RChild;
}BiTNode, *BiTree;		//二叉链表存储结构

typedef BiTree* ElemType;		//栈中数据元素类型，栈中保存结点指针
typedef struct
{
	ElemType data[MAXSIZE];
	int top;
}SeqStack;		//定义顺序栈

void InitStack(SeqStack *S)		//初始化栈
{
	S->top == -1;
	BiTNode *p;
}

int Push(SeqStack *S, ElemType x)		//入栈
{
	if (S->top == MAXSIZE - 1)		//栈满
	{
		return FALSE;
	}
	S->top++;
	S->data[S->top] = x;			//进栈
	return TURE;
}

int Pop(SeqStack *S, ElemType x)			//出栈
{
	if (S->top = -1)		//栈空
	{
		return FALSE;
	}
	else
	{
		*x = S->data[S->top];		//栈顶元素赋给x
		S->top--;								//修改栈顶元素
		return TURE;
	}
}

int GetTop(SeqStack *S, ElemType *x)		//取栈顶元素
{
	if (S->top == -1)
	{
		return FALSE;
	}
	else
	{
		*x = S->data[S->top];
		return TURE;
	}
}

int IsEmpty(SeqStack *S)		//判空栈
{
	if (S->top = -1||S==NULL)
	{
		return TURE;
	}
	else
	{
		return FALSE;
	}
}

void visit(char ch)
{
	printf("%c ", ch);
}

void GreateBiTree(BiTree bt)		//先序遍历创建二叉链表
{
	char ch;
	//ch = getchar;
	scanf("%c", &ch);
	while (ch == 0)
	{
		if (ch == '.')		// . 表示空子树
		{
			bt = NULL;
		}
		else
		{
			bt = (BiTree)malloc(sizeof(BiTNode));
			bt->data = ch;
			GreateBiTree(&bt->LChild);
			GreateBiTree(&bt->RChild);
		}
	}
	return bt;
}

void PreOrder(BiTree root)		//先序遍历二叉树
{
	SeqStack *S;
	BiTNode *p;
	InitStack(&S);
	p = root;
	while (p != NULL || !IsEmpty)
	{
		visit(p->data);
		if (p != NULL)
		{
			Push(&S, &p);
			p->LChild;
		}
		else
		{
			Pop(&S, &p);
			printf("%c", p->data);
			p = p->RChild;
		}
	}
}

void InOrder(BiTree root)		//中序遍历二叉树
{
	SeqStack *S;
	BiTNode *p;
	InitStack(&S);
	p = root;
	while (p != NULL || !IsEmpty(S))
	{
		if (p != NULL)
		{
			Push(&S, p);
			visit(p->data);
			p = p->LChild;
		}
		else
		{
			Pop(&S, &p);	
			printf("%c", p->data); 
			//visit(p->data);
			p = p->RChild;
		}
	}
}

void PostOrder(BiTree root)		//后序遍历二叉树
{
	BiTNode *p, *q;
	SeqStack S;
	q = NULL;
	p = root;
	InitStack(&S);
	while (p != NULL || !IsEmpty)
	{
		if (p != NULL)
		{
			Push(&S, p);
			p->LChild;
		}
		else
		{
			GetTop(&S, &p);
			if ((p->RChild == NULL) || (p->RChild == q))
			{
				visit(p->data);
				q = p;
				Pop(&S, &p);
				p = NULL;
			}
			else
			{
				printf("%c", p->data);
				p = p->RChild;
			}
		}
	}
}

void menu()
{
	printf("\t***********************************\n");
	printf("\t***\t  1.创建二叉链表   \t***\n");
	printf("\t***\t  2.非递归先序遍历\t***\n");
	printf("\t***\t  3.非递归中序遍历\t***\n");
	printf("\t***\t  4.非递归后序遍历\t***\n");
	printf("\t***\t  0.退出系统          \t***\n");
	printf("\t***********************************\n");
	printf("\n");
	printf("请输入选项：");
}

int main()
{
	int n;
	int m = 1;
	char input;
	BiTree *bt;
	bt = NULL;
	while (m)
	{
		menu();
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			printf("请输入结点的前序序列创建二叉树: (. 表示空)\n ");
			scanf("%s", &input);
			GreateBiTree(bt);
			break;
		case 2:
			printf("非递归法先序遍历二叉树:\n");
			PreOrder(bt);
			printf("\n");
			break;
		case 3:
			printf("非递归法中序遍历二叉树\n");
			InOrder(bt);
			printf("\n");
			break;
		case 4:
			printf("非递归法后序遍历二叉树\n");
			PostOrder(bt);
			printf("\n");
			break;
			case 0:
				m = 0;
				printf("退出\n");
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	}
	system("pause");
	return 0;
}