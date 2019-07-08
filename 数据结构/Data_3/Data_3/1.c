#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include <malloc.h>

#define MAXSIZE 100

typedef char DataType;
typedef struct BiTNode	/* ��������洢�ṹ */
{
	DataType data;
	struct BiTNode *lchild, *rchild;
}BiTree;
typedef BiTree* ElemType;	/* ջ������Ԫ�����ͣ�ջ�б�����ָ�� */
typedef struct
{
	ElemType  data[MAXSIZE];
	int top;
}SeqStack;					/* ջ�����Ͷ��壬˳��ջ */
typedef struct
{
	ElemType queue[MAXSIZE];
	int front, rear;
}SP;
SeqStack *initSeqStack() /* ��ʼ��ջ */
{
	SeqStack *s;		 /* ���Ƚ���ջ�ռ䣬Ȼ���ʼ��ջ��ָ�� */
	s = (SeqStack*)malloc(sizeof(SeqStack));
	s->top = -1;
	return s;
}
int push(SeqStack *s, ElemType x)
{
	if (s->top == MAXSIZE - 1){ /* ջ��������ջ */
		printf("ջ��");
		return 0;
	}
	s->top++;
	s->data[s->top] = x;
	return 1;
}
void pop(SeqStack *s) 	/* ��ջ������ջ���� */
{
	s->top--;
}
int empty(SeqStack *s)
{
	if (s->top == -1) return 1;
	else return 0;
}
ElemType top(SeqStack *s)  /* ��ջ���� */
{
	return (s->data[s->top]);
}
/* �ݹ��㷨������������ */
BiTree *createBiTree()
{
	DataType ch;
	BiTree *T;
	ch = getchar();
	if (ch == '0') return NULL;
	else {
		T = (BiTree *)malloc(sizeof(BiTree));
		T->data = ch;
		T->lchild = createBiTree();
		T->rchild = createBiTree();
		return T;
	}
}
/* ��������������ĵݹ��㷨 */
void InOrder(BiTree *T)
{
	if (T)
	{
		InOrder(T->lchild);
		printf("%c", T->data);
		InOrder(T->rchild);
	}
}
///* ǰ������������ĵݹ��㷨 */
//void PreOrder(BiTree *T)
//{
//	if (T)
//	{
//		printf("%c", T->data);
//		PreOrder(T->lchild);
//		PreOrder(T->rchild);
//	}
//}
///* ��������������ĵݹ��㷨 */
//void PostOrder(BiTree *T)
//{
//	if (T)
//	{
//		PostOrder(T->lchild);
//		PostOrder(T->rchild);
//		printf("%c", T->data);
//	}
//}
/* ��������������ķǵݹ��㷨 */
void InOrderFei(BiTree *p)
{
	SeqStack *s; s = initSeqStack();
	while (1)
	{
		while (p) { push(s, p); p = p->lchild; }	/* �Ƚ����ָ��ѹջ������ջʱ�ٷ��� */
		if (empty(s))  break;
		p = top(s); pop(s); printf("%c", p->data); p = p->rchild;
	}
}
/* ����α��� */
void LevelOrder(BiTree *T)
{
	SP *p;
	p = (SP*)malloc(sizeof(SP));
	p->front = 0;
	p->rear = 0;
	if (T != NULL){
		p->queue[p->front] = T;
		p->front = p->front + 1;
	}
	while (p->front != p->rear){
		T = p->queue[p->rear];
		p->rear = p->rear + 1;
		printf("%c", T->data);
		if (T->lchild != NULL){
			p->queue[p->front] = T->lchild;/*���ӽ�����*/
			p->front = p->front + 1;
		}
		if (T->rchild != NULL){
			p->queue[p->front] = T->rchild;/*�Һ��ӽ�����*/
			p->front = p->front + 1;
		}
	}
}
/* ��������ĸ߶� */
int height(BiTree *T)
{
	int i, j;
	if (!T)  return 0;
	i = height(T->lchild);	/* ���������ĸ߶� */
	j = height(T->rchild);	/* ���������ĸ߶� */
	return i>j ? i + 1 : j + 1;		/* �������ĸ߶�Ϊ���������нϸߵĸ߶ȼ�1 */
}
/* ������������н����� */
int Nodes(BiTree *T)
{
	int n1, n2;
	if (T == NULL) return 0;
	else if (T->lchild == NULL&&T->rchild == NULL) return 1;
	else {
		n1 = Nodes(T->lchild);
		n2 = Nodes(T->rchild);
		return n1 + n2 + 1;
	}
}
/* ���������Ҷ�ӽ����� */
int leafs(BiTree *T)
{
	int num1, num2;
	if (T == NULL) return 0;
	else{
		if (T->lchild == NULL&&T->rchild == NULL) return 1;
		num1 = leafs(T->lchild);	/* ����������Ҷ�ӽ���� */
		num2 = leafs(T->rchild);	/* ����������Ҷ�ӽ���� */
		return num1 + num2;
	}
}/* ������������������������ */
void exchange(BiTree *T)
{
	BiTree *temp = NULL;
	if (T->lchild == NULL&&T->rchild == NULL) return;
	else{
		temp = T->lchild;
		T->lchild = T->rchild;
		T->rchild = temp;
	}
	if (T->lchild) exchange(T->lchild);
	if (T->rchild) exchange(T->rchild);
}/* ������������ı��� */
void Display(BiTree *T)
{
	printf("\t�����������������������: ");
	InOrder(T);
	printf("\n");
	printf("\t�������������ǰ��������: ");
	PreOrder(T);
	printf("\n");
	printf("\t�����������������������: ");
	PostOrder(T);
	printf("\n");
}
void menu()
{
	printf("\n--------------------------------------------------------------------------------------");
	printf("\n\t                 �������������˵�\n\n");
	printf("\t1.�ݹ鷨������������            2.�ݹ鷨�������������\n ");
	printf("\t3.�ǵݹ鷨�������������        4.��η�����������\n");//         4.�ݹ鷨�������������\n ");
	//printf("\t5.�ݹ鷨ǰ�����������        
	//printf("4.��η�����������\n");
	printf("\t5.�������ĸ߶�                  6.�������Ľ�����\n");
	printf("\t7.��������Ҷ�ӽ�����          8.������������������������\n");
	printf("\t0.�˳�ϵͳ\n");
	printf("\n--------------------------------------------------------------------------------------");
	printf("\n");
	printf("\t������ѡ��:");
}

int main()
{
	int n;
	int m = 1;
	BiTree *bt; bt = NULL;
	while (m)
	{
		menu();
		scanf("%d", &n);
		getchar();
		switch (n)
		{
		case 1:
			printf("\n\t���������ǰ�����д���������:0��ʾ��: ");
			bt = createBiTree();
			break;
			/* ���ɶ����� */
		case 2:
			printf("\n\t�ݹ鷨�������������: ");
			InOrder(bt);
			printf("\n"); break;
		case 3:
			printf("\n\t�ǵݹ鷨������������� ");
			InOrderFei(bt);
			printf("\n"); break;
		/*case 4:{
			printf("\n\t�ݹ鷨�������������: ");
			PostOrder(bt);
			printf("\n"); break; }
		case 5:
			printf("\n\t�ݹ鷨ǰ�����������: ");
			PreOrder(bt);
			printf("\n"); break;*/
		case 4:
			printf("\n\t����α���������: ");
			LevelOrder(bt);
			printf("\n"); break;
		case 5:
			printf("\n\t�������ĸ߶�Ϊ:%d\n", height(bt));
			printf("\n"); break;
		case 6:
			printf("\n\t�������Ľ����Ϊ:%d\n", Nodes(bt));
			printf("\n"); break;
		case 7:
			printf("\n\t��������Ҷ�ӽ����Ϊ:%d\n", leafs(bt));
			break;
		case 8:
			printf("\n\t������������������������");
			printf("\n\n");
			exchange(bt);
			Display(bt); break;
		case 0:m = 0;
		}
	}
	system("pause");
	return 0;
}

