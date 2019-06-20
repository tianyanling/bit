#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<stdlib.h>
#include <malloc.h>

#define MAXSIZE 100

typedef char DataType;
typedef struct BiTNode	/* ��������洢�ṹ */
{
	DataType data;
	struct BiTNode *LChild;
	struct BiTNode *RChild;
}BiTree;

typedef BiTree* ElemType;	/* ջ������Ԫ�����ͣ�ջ�б�����ָ�� */
typedef struct
{
	ElemType  data[MAXSIZE];
	int top;
}SeqStack;					/* ջ�����Ͷ��壬˳��ջ */

void InitSeqStack(SeqStack *S) /* ��ʼ��ջ */
{	 /* ���Ƚ���ջ�ռ䣬Ȼ���ʼ��ջ��ָ�� */
	S->top = -1;
}

void Push(SeqStack *S, ElemType x)
{
	if (S->top == MAXSIZE - 1)
	{ /* ջ��������ջ */
		printf("ջ��\n");
	}
	S->top++;
	S->data[S->top] = x;
}

void Pop(SeqStack *S) 	/* ��ջ������ջ���� */
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

ElemType Top(SeqStack *S)  /* ��ջ���� */
{
	return (S->data[S->top]);
}

/* �ݹ��㷨������������ */
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

int GetTop(SeqStack *S, ElemType *x)		//ȡջ��Ԫ��
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

void PreOrder(BiTree *p)	//�������������
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

/* ��������������ķǵݹ��㷨 */
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
		}	/* �Ƚ����ָ��ѹջ������ջʱ�ٷ��� */
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

void PostOrder(BiTree *p)		//�������������
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
	printf("\t***\t  0.�˳�ϵͳ          \t***\n");
	printf("\t***\t  1.������������   \t***\n");
	printf("\t***\t  2.�ǵݹ��������\t***\n");
	printf("\t***\t  3.�ǵݹ��������\t***\n");
	printf("\t***\t  4.�ǵݹ�������\t***\n");
	printf("\t***********************************\n");
	printf("\n");
	printf("������ѡ�");
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
			printf("�˳���\n");
			break;
		case 1:
			printf("���������ǰ�����д���������: (. ��ʾ��)\n");
			bt=GreateBiTree();
			break;
		case 2:
			printf("�ǵݹ鷨�������������:");
			PreOrder(bt);
			printf("\n");
			break;
		case 3:
			printf("�ǵݹ鷨�������������");
			InOrder(bt);
			printf("\n");
			break;
		case 4:
			printf("�ǵݹ鷨�������������");
			PostOrder(bt);
			printf("\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	}
	system("pause");
	return 0;
}