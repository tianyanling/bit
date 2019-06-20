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
//}BiTNode, *BiTree;		//��������洢�ṹ
//
//typedef BiTree* ElemType;		//ջ������Ԫ�����ͣ�ջ�б�����ָ��
//typedef struct Node
//{
//	ElemType data[MAXSIZE];
//	struct  Node *next;
//	int  top;
//}SeqStack;		//����˳��ջ
//
//SeqStack InitStack(SeqStack *S)		//��ʼ��ջ
//{
//	S->top = -1;
//	BiTNode *p;
//}
//
//int Push(SeqStack *S, ElemType x)		//��ջ
//{
//	if (S->top == MAXSIZE - 1)		//ջ��
//	{
//		return 0;
//	}
//	S->top++;
//	S->data[S->top] = x;			//��ջ
//	return 1;
//}
//
//int Pop(SeqStack *S, ElemType x)			//��ջ
//{
//	if (S->top == -1)		//ջ��
//	{
//		return 0;
//	}
//	else
//	{
//		*x = S->data[S->top];		//ջ��Ԫ�ظ���x
//		S->top--;								//�޸�ջ��Ԫ��
//		return 1;
//	}
//}
//
//int GetTop(SeqStack *S, ElemType *x)		//ȡջ��Ԫ��
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
//int IsEmpty(SeqStack *S)		//�п�ջ
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
//	// �Զ������е�����Ԫ�ط���
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
//ElemType top(SeqStack *s)  /* ��ջ���� */
//{
//	return (s->data[s->top]);
//}
//
///* �ݹ��㷨������������ */
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
////BiTree GreateBiTree()		//�������������������
////{
////	DataType ch;
////	BiTree bt;
////	ch = getchar();
////		if (ch == '.')		// . ��ʾ������
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
//void PreOrder(BiTree root)	//�������������
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
//void InOrder(BiTree root)		//�������������
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
//void PostOrder(BiTree root)		//�������������
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
//	printf("\t***\t  1.������������   \t***\n");
//	printf("\t***\t  2.�ǵݹ��������\t***\n");
//	printf("\t***\t  3.�ǵݹ��������\t***\n");
//	printf("\t***\t  4.�ǵݹ�������\t***\n");
//	printf("\t***\t  0.�˳�ϵͳ          \t***\n");
//	printf("\t***********************************\n");
//	printf("\n");
//	printf("������ѡ�");
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
//			printf("�˳���\n");
//			break;
//		case 1:
//			printf("���������ǰ�����д���������: (. ��ʾ��)\n");
//			GreateBiTree(bt);
//			break;
//		case 2:
//			printf("�ǵݹ鷨�������������:");
//			PreOrder(bt);
//			printf("\n");
//			break;
//		case 3:
//			printf("�ǵݹ鷨�������������");
//			InOrder(bt);
//			printf("\n");
//			break;
//		case 4:
//			printf("�ǵݹ鷨�������������\n");
//			PostOrder(bt);
//			printf("\n");
//			break;
//		default:
//			printf("����������������룡\n");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}