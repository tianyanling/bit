//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//
//#define MAXSIZE 1000
//
//typedef char DataType;
//typedef struct BiTNode		
//{
//	DataType data;
//	struct BiTNode *LChild;
//	struct BiTNode *RChild;
//}BiTNode, *BiTree;		//二叉链表存储结构
//
//typedef BiTree* ElemType;		//栈中数据元素类型，栈中保存结点指针
//typedef struct Node
//{
//	ElemType data[MAXSIZE];
//	struct  Node *next;
//	int  top;
//}SeqStack;		//定义顺序栈
//
//SeqStack InitStack(SeqStack *S)		//初始化栈
//{
//	S->top = -1;
//	BiTNode *p;
//}
//
//int Push(SeqStack *S, ElemType x)		//入栈
//{
//	if (S->top == MAXSIZE - 1)		//栈满
//	{
//		return 0;
//	}
//	S->top++;
//	S->data[S->top] = x;			//进栈
//	return 1;
//}
//
//int Pop(SeqStack *S, ElemType x)			//出栈
//{
//	if (S->top == -1)		//栈空
//	{
//		return 0;
//	}
//	else
//	{
//		*x = S->data[S->top];		//栈顶元素赋给x
//		S->top--;								//修改栈顶元素
//		return 1;
//	}
//}
//
//int GetTop(SeqStack *S, ElemType *x)		//取栈顶元素
//{
//	if (S->top == -1)
//	{
//		return 0;
//	}
//	else
//	{
//		*x = S->data[S->top];
//		return 1;
//	}
//}
//
//int IsEmpty(SeqStack *S)		//判空栈
//{
//	if (S->top==-1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//BiTree Visit(ElemType ch)
//{
//	// 对二叉树中的数据元素访问
//	if (ch == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		printf("%c", ch);
//	}
//	return 1;
//}
//
//
//ElemType top(SeqStack *s)  /* 设栈不空 */
//{
//	return (s->data[s->top]);
//}
//
///* 递归算法创建二叉链表 */
//BiTree *GreateBiTree()
//{
//	DataType ch;
//	BiTree bt;
//	ch = getchar();
//	if (ch == '.') 
//		return NULL;
//	else
//	{
//		bt = (BiTree *)malloc(sizeof(BiTree));
//		bt->data = ch;
//		bt->LChild = GreateBiTree();
//		bt->RChild = GreateBiTree();
//		return bt;
//	}
//}
////
////BiTree GreateBiTree()		//先序遍历创建二叉链表
////{
////	DataType ch;
////	BiTree bt;
////	ch = getchar();
////		if (ch == '.')		// . 表示空子树
////		{
////			return NULL;
////		}
////		else
////		{
////			bt = (BiTree *)malloc(sizeof(BiTree));
////			bt->data = ch;
////			GreateBiTree(&bt->LChild);
////			GreateBiTree(&bt->RChild);
////		}
////		/*free(bt);
////		bt == NULL;*/
////		return bt;
////}
//
//void PreOrder(BiTree root)	//先序遍历二叉树
//{
//	SeqStack *S;
//	BiTNode *p;
//	InitStack(&S);
//	p = root;
//	while (p || !IsEmpty(S))
//	{
//		//Visit(p->data);
//		while (p)
//		{
//			printf("%c", p->data);
//			Push(&S, p);
//			p->LChild;
//		}
//			if(Pop(&S, &p))
//			p = p->RChild;
//	}
//}
//
//void InOrder(BiTree root)		//中序遍历二叉树
//{
//	SeqStack *S;
//	BiTNode *p;
//	p = root;
//	InitStack(&S);
//	while (1)
//	{
//		while(p)
//		{
//			Push(S, p);
//			p = p->LChild;
//		}
//		if (IsEmpty(S))
//		{
//			break;
//		}
//		p = top(S);
//		Pop(&S, &p);
//		printf("%c", p->data);
//		p = p->RChild;
//	}
//}
//
//void PostOrder(BiTree root)		//后序遍历二叉树
//{
//	BiTNode *p, *q;
//	SeqStack S;
//	q = NULL;
//	p = root;
//	InitStack(&S);
//	while (p != NULL || !IsEmpty)
//	{
//		if (p != NULL)
//		{
//			Push(&S, p);
//			p->LChild;
//		}
//		else
//		{
//			GetTop(&S, &p);
//			if ((p->RChild == NULL) || (p->RChild == q))
//			{
//				Visit(p->data);
//				printf("p-data");
//				q = p;
//				Pop(&S, &p);
//				p = NULL;
//			}
//			else
//			{
//				p = p->RChild;
//			}
//		}
//	}
//}
//
//void menu()
//{
//	printf("\t***********************************\n");
//	printf("\t***\t  1.创建二叉链表   \t***\n");
//	printf("\t***\t  2.非递归先序遍历\t***\n");
//	printf("\t***\t  3.非递归中序遍历\t***\n");
//	printf("\t***\t  4.非递归后序遍历\t***\n");
//	printf("\t***\t  0.退出系统          \t***\n");
//	printf("\t***********************************\n");
//	printf("\n");
//	printf("请输入选项：");
//}
//
//int main()
//{
//	int n;
//	int m = 1;
//	BiTree *bt;
//	bt = NULL;
//	while (m)
//	{
//		menu();
//		scanf("%d", &n);
//		getchar();
//		switch (n)
//		{
//		case 0:
//			m = 0;
//			printf("退出！\n");
//			break;
//		case 1:
//			printf("请输入结点的前序序列创建二叉树: (. 表示空)\n");
//			GreateBiTree(bt);
//			break;
//		case 2:
//			printf("非递归法先序遍历二叉树:");
//			PreOrder(bt);
//			printf("\n");
//			break;
//		case 3:
//			printf("非递归法中序遍历二叉树");
//			InOrder(bt);
//			printf("\n");
//			break;
//		case 4:
//			printf("非递归法后序遍历二叉树\n");
//			PostOrder(bt);
//			printf("\n");
//			break;
//		default:
//			printf("输入错误，请重新输入！\n");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}