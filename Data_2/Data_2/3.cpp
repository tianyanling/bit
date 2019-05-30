//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include<stdlib.h>
//#include <malloc.h>
//#define MAXSIZE 80
//
//typedef struct
//{
//	int data[80];
//	int top;
//}SeqStack;
//typedef struct lnode
//{
//	int data;
//	struct lnode *next;
//}StackNode, *LinkStack;
//typedef struct
//{
//	int data[80];
//	int front, rear;
//	int num;
//}C_SeQueue;
//typedef struct node
//{
//	int data;
//	struct node *next;
//}QNode;
//typedef struct
//{
//	QNode *front, *rear;
//}LQueue;
//void menu()
//{
//	printf("\n");
//	printf("\t   栈的链式存储         栈的顺序存储    \n");
//	printf("\t----------------------------------------\n");
//	printf("\t|      1.初始化      |      5.初始化   |\n");
//	printf("\t|      2.判空        |      6.判栈空   |\n");
//	printf("\t|      3.入栈        |      7.入栈     |\n");
//	printf("\t|      4.出栈        |      8.出栈     |\n");
//	printf("\t----------------------------------------\n");
//	printf("\t   队列的链式存储       队列的顺序存储  \n");
//	printf("\n");
//	printf("\t      9.初始化      |     13.建有头结点队 \n");
//	printf("\t      10.判空       |     14.判空         \n");
//	printf("\t      11.入队       |     15.入队         \n");
//	printf("\t      12.出队       |     16.出队         \n");
//	printf("\t      0.退出        |                     \n");
//	printf("\t请输入所需操作的序号:");
//}
//LinkStack Init_LinkStack()
//{
//	StackNode *L;
//	L = (StackNode*)malloc(sizeof(StackNode));
//	L->data = 100;
//	L->next = NULL;
//	return L;
//}
//int Empty_LinkStack(LinkStack top)
//{
//	if (top->next == NULL)  return 1;
//	else  return 0;
//}
//LinkStack Push_LinkStack(LinkStack top, int x)
//{
//	StackNode *s;
//	s = (StackNode*)malloc(sizeof(StackNode));
//	s->data = x;
//	s->next = top->next;
//	top->next = s;
//	return top;
//}
//LinkStack Pop_LinkStack(LinkStack top, int *s)
//{
//	StackNode *p;
//	int j = 0;
//	p = top->next;
//	if (p != NULL)
//	{
//		*s = p->data;
//		top->next = p->next;
//		free(p);
//	}
//	return top;
//}
//SeqStack * init_SeqStack()
//{
//	SeqStack *S;
//	S = (SeqStack*)malloc(sizeof(SeqStack));
//	S->top = -1;
//	return S;
//}
//int Empty_SeqStack(SeqStack *S)
//{
//	if (S->top == -1)
//		return 1;
//	else
//		return 0;
//}
//int Push_SeqStack(SeqStack *S, int x)
//{
//	if (S->top == 80 - 1)
//	{
//		return(0);
//	}
//	else
//	{
//		S->top++;
//		S->data[S->top] = x;
//		return(1);
//	}
//}
//int Pop_SeqStack(SeqStack *S, int *p)
//{
//	if (Empty_SeqStack(S) == 1)
//	{
//		return 0;
//	}
//	else
//	{
//		*p = S->data[S->top];
//		S->top--;
//		return 1;
//	}
//}
//C_SeQueue *init_SeQueue()
//{
//	C_SeQueue *q;
//	q = (C_SeQueue*)malloc(sizeof(C_SeQueue));
//	q->front = q->rear = 80 - 1;
//	q->num = 0;
//	return q;
//}
//int In_SeQueue(C_SeQueue *q, int x)
//{
//	if (q->num == 80)
//	{
//		return(-1);
//	}
//	else
//	{
//		q->rear = (q->rear + 1) % 80;
//		q->data[q->rear] = x;
//		q->num++;
//		return(1);
//	}
//}
//int Out_SeQueue(C_SeQueue *q, int *p)
//{
//	if (q->num == 0)
//	{
//		return -1;
//	}
//	else
//	{
//		q->front = (q->front + 1) % 80;
//		*p = q->data[q->front];
//		q->num--;
//		return 1;
//	}
//}
//int Empty_SeQueue(C_SeQueue *q)
//{
//	if (q->num == 0)  return 1;
//	else  return 0;
//}
//LQueue *Init_LQueue()
//{
//	LQueue *q;
//	QNode *p;
//	q = (LQueue*)malloc(sizeof(LQueue));
//	p = (QNode*)malloc(sizeof(QNode));
//	p->next = NULL;
//	q->front = q->rear = p;
//	return q;
//}
//void In_LQueue(LQueue *q, int x)
//{
//	QNode *p;
//	p = (QNode*)malloc(sizeof(QNode));
//	p->data = x;
//	p->next = NULL;
//	q->rear->next = p;
//	q->rear = p;
//}
//int Empty_LQueue(LQueue *q)
//{
//	if (q->front == q->rear)  return 1;
//	else  return 0;
//}
//int Out_LQueue(LQueue *q, int *s)
//{
//	QNode *p;
//	if (Empty_LQueue(q) == 1)
//	{
//		return 0;
//	}
//	else
//	{
//		p = q->front->next;
//		q->front->next = p->next;
//		*s = p->data;
//		free(p);
//		if (q->front->next == NULL)
//			q->rear = q->front;
//		return 1;
//	}
//}
//int main()
//{
//	int n, m = 1;
//	LinkStack L = NULL;
//	SeqStack *S;
//	C_SeQueue *Q;
//	LQueue *LQ = NULL;
//	while (m)
//	{
//		menu();
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 1: L = Init_LinkStack();
//			break;
//		case 2:{
//			StackNode *p = L->next;
//			int flag;
//			flag = Empty_LinkStack(L);
//			if (flag == 0)
//			{
//				while (p)
//				{
//					printf("%5d", p->data);
//					p = p->next;
//				}
//			}
//			else
//				printf("\t栈空!\n");
//			break;
//		}
//		case 3:{
//			LinkStack p;
//			int x;
//			printf("\t请输入一个数:");
//			scanf("%d", &x);
//			L = Push_LinkStack(L, x);
//			p = L->next;
//			printf("\t进栈元素为:");
//			while (p)
//			{
//				printf("%5d", p->data);
//				p = p->next;
//			}
//			break;
//		}
//		case 4:{
//			int x, *s;
//			LinkStack p;
//			s = &x;
//			L = Pop_LinkStack(L, s);
//			p = L->next;
//			printf("\t出栈元素为:");
//			while (p)
//			{
//				printf("%5d", p->data);
//				p = p->next;
//			}
//			printf("%5d\n", x);
//			break;
//		}
//		case 5:S = init_SeqStack(); break;
//		case 6:{
//			S = init_SeqStack();
//			int i, success;
//			success = Empty_SeqStack(S);
//			if (success != 1)
//			{
//				for (i = 0; i <= S->top; i++)
//				{
//					printf("%5d", S->data[i]);
//				}
//			}
//			else
//				printf("\t栈空!\n");
//			break;
//		}
//		case 7:{
//			S = init_SeqStack();
//			int i, success;
//			int x;
//			printf("\t请输入一个数:");
//			scanf("%d", &x);
//			success = Push_SeqStack(S, x);
//			printf("\t您输入的数是:");
//			if (success == 1)
//			{
//				for (i = 0; i <= S->top; i++)
//				{
//					printf("%5d", S->data[i]);
//				}
//			}
//			else
//				printf("\t栈满!\n");
//			break;
//		}
//		case 8:{
//			S = init_SeqStack();
//			int i, success;
//			int x, *p;
//			p = &x;
//			success = Pop_SeqStack(S, p);
//			printf("\t您刚才输入的数是:");
//			if (success == 1)
//			{
//				for (i = 0; i <= S->top; i++)
//				{
//					printf("%5d", S->data[i]);
//				}
//				printf("%5d\n", x);
//			}
//			else
//				printf("\t栈空!\n");
//			break;
//		}
//		case 9:Q = init_SeQueue(); break;
//		case 10:{
//			Q = init_SeQueue();
//			int i, flag, number;
//			flag = Empty_SeQueue(Q);
//			number = Q->num;
//			if (flag != 1)
//			{
//				for (i = (Q->front + 1) % 80; number>0; number--, i = (i + 1) % 80)
//				{
//					printf("\t请输入一个数:%5d", Q->data[i]);
//				}
//			}
//			else
//				printf("\t队空!\n");
//			break;
//		}
//		case 11:{
//			Q = init_SeQueue();
//			int i, flag, number;
//			int x;
//			printf("\t请输入一个数:");
//			scanf("%d", &x);
//			flag = In_SeQueue(Q, x);
//			number = Q->num;
//			printf("\t您输入的一组数是:");
//			if (flag == 1)
//			{
//				for (i = (Q->front + 1) % 80; number>0; number--, i = (i + 1) % 80)
//				{
//					printf("%5d", Q->data[i]);
//				}
//			}
//			else
//				printf("\t队满!\n");
//			break;
//		}
//		case 12:{
//			Q = init_SeQueue();
//			int i, flag, number;
//			int x, *p;
//			p = &x;
//			flag = Out_SeQueue(Q, p);
//			number = Q->num;
//			printf("\t您刚才输入的一组数是:");
//			if (flag == 1)
//			{
//				for (i = (Q->front + 1) % 80; number>0; number--, i = (i + 1) % 80)
//				{
//					printf("%5d", Q->data[i]);
//				}
//				printf("%5d\n", x);
//			}
//			else
//				printf("\t队空!\n");
//			break;
//		}
//		case 13:    LQ = Init_LQueue();
//			break;
//		case 14:{
//			int flag;
//			QNode *p;
//			flag = Empty_LQueue(LQ);
//			p = LQ->front->next;
//			if (flag != 1)
//			{
//				while (p != NULL)
//				{
//					printf("\t请输入一个数:%5d", p->data);
//					p = p->next;
//				}
//			}
//			else
//				printf("\t队空!\n");
//			break;
//		}
//		case 15:{
//			int x;
//			QNode *p;
//			printf("\t请输入一个数:");
//			scanf("%d", &x);
//			In_LQueue(LQ, x);
//			p = LQ->front->next;
//			printf("\t进队元素为:");
//			while (p != NULL)
//			{
//				printf("%5d", p->data);
//				p = p->next;
//			}
//			break;
//		}
//		case 16:{
//			int flag;
//			int x, *s;
//			QNode *p;
//			s = &x;
//			flag = Out_LQueue(LQ, s);
//			p = LQ->front->next;
//			if (flag == 1)
//			{
//				printf("\t出队元素为:%5d", x);
//				while (p != NULL)
//				{
//					printf("%5d", p->data);
//					p = p->next;
//				}
//			}
//			else
//				printf("\t队空!\n");
//			break;
//		}
//		case 0:m = 0;
//		}
//	}
//	system("pause");
//	return 0;
//}
