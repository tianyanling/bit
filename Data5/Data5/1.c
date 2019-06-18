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
}BiTNode, *BiTree;		//��������洢�ṹ

typedef BiTree* ElemType;		//ջ������Ԫ�����ͣ�ջ�б�����ָ��
typedef struct
{
	ElemType data[MAXSIZE];
	int top;
}SeqStack;		//����˳��ջ

void InitStack(SeqStack *S)		//��ʼ��ջ
{
	S->top == -1;
	BiTNode *p;
}

int Push(SeqStack *S, ElemType x)		//��ջ
{
	if (S->top == MAXSIZE - 1)		//ջ��
	{
		return FALSE;
	}
	S->top++;
	S->data[S->top] = x;			//��ջ
	return TURE;
}

int Pop(SeqStack *S, ElemType x)			//��ջ
{
	if (S->top = -1)		//ջ��
	{
		return FALSE;
	}
	else
	{
		*x = S->data[S->top];		//ջ��Ԫ�ظ���x
		S->top--;								//�޸�ջ��Ԫ��
		return TURE;
	}
}

int GetTop(SeqStack *S, ElemType *x)		//ȡջ��Ԫ��
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

int IsEmpty(SeqStack *S)		//�п�ջ
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

void GreateBiTree(BiTree bt)		//�������������������
{
	char ch;
	//ch = getchar;
	scanf("%c", &ch);
	while (ch == 0)
	{
		if (ch == '.')		// . ��ʾ������
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

void PreOrder(BiTree root)		//�������������
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

void InOrder(BiTree root)		//�������������
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

void PostOrder(BiTree root)		//�������������
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
	printf("\t***\t  1.������������   \t***\n");
	printf("\t***\t  2.�ǵݹ��������\t***\n");
	printf("\t***\t  3.�ǵݹ��������\t***\n");
	printf("\t***\t  4.�ǵݹ�������\t***\n");
	printf("\t***\t  0.�˳�ϵͳ          \t***\n");
	printf("\t***********************************\n");
	printf("\n");
	printf("������ѡ�");
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
			printf("���������ǰ�����д���������: (. ��ʾ��)\n ");
			scanf("%s", &input);
			GreateBiTree(bt);
			break;
		case 2:
			printf("�ǵݹ鷨�������������:\n");
			PreOrder(bt);
			printf("\n");
			break;
		case 3:
			printf("�ǵݹ鷨�������������\n");
			InOrder(bt);
			printf("\n");
			break;
		case 4:
			printf("�ǵݹ鷨�������������\n");
			PostOrder(bt);
			printf("\n");
			break;
			case 0:
				m = 0;
				printf("�˳�\n");
		default:
			printf("����������������룡\n");
			break;
		}
	}
	system("pause");
	return 0;
}