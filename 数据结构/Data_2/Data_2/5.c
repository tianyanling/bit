#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

/////////////链式存储实现栈的初始化、入栈、出栈///////////////////
typedef int DataType;
typedef struct Node
{
	DataType data;
	struct Node* next;
}LinkStackNode, *LinkStack;

//链式存储实现栈的初始化
void InitStack_Link(LinkStack* top)
{
	LinkStackNode *tmp = (LinkStackNode *)malloc(sizeof(LinkStackNode));//头结点
	if (tmp == NULL)
		return;
	tmp->data = 0;
	tmp->next = NULL;
	*top = tmp;
}

//链式存储实现栈的入栈
void Push_Link(LinkStack top, DataType x)
{
	LinkStackNode* tmp;
	tmp = (LinkStackNode*)malloc(sizeof(LinkStackNode));//申请空间
	if (tmp == NULL)
		return;
	tmp->data = x;
	tmp->next = top->next;
	top->next = tmp;//修改栈顶指针
}

//链式存储实现栈的出栈
void Pop_Link(LinkStack top, DataType* x)
{
	LinkStackNode* tmp;
	tmp = top->next;
	if (tmp == NULL)//空栈
	{
		return;
	}
	*x = tmp->data;
	top->next = tmp->next;
	free(tmp);
}

void Print(LinkStack top)
{
	LinkStackNode* ss = top->next;
	if (top == NULL)
		return;
	else
	{
		while (ss != NULL)
		{
			printf("%d ", ss->data);
			ss = ss->next;
		}
		printf("\n");
	}
}

////////////////顺序存储实现栈的初始化、入栈、出栈操作/////////////
#define Size 20
typedef struct
{
	DataType arr[Size];
	int top;
}SeqStack;

//顺序存储实现栈的初始化
void InitStack_Seq(SeqStack* s)
{
	s->top = -1;//空栈
}

//顺序存储实现栈的入栈
int Push_Seq(SeqStack* s, DataType x)
{
	if (s->top == Size - 1)//栈满
		return 0;
	s->top++;
	s->arr[s->top] = x;
	return 1;
}

//顺序存储实现栈的出栈
int Pop_Seq(SeqStack* s, DataType* x)
{
	if (s->top == -1)//栈空
		return 0;
	else
	{
		*x = s->arr[s->top];
		s->top--;
		return 1;
	}
}

void Print_Seq_Stack(SeqStack s)
{
	int i = 0;
	for (i = 0; i <= s.top; i++)
	{
		printf("%d ", s.arr[i]);
	}
	printf("\n");
}

//////////采用链式存储实现队列的初始化、入队、出队操作////////////
typedef struct qNode
{
	DataType data;
	struct qNode* next;
}LinkQueueNode;

typedef struct
{
	LinkQueueNode* front;
	LinkQueueNode* rear;
}LinkQueue;

//链式存储实现队列的初始化
void InitQue(LinkQueue* q)
{
	q->front = (LinkQueueNode*)malloc(sizeof(LinkQueueNode));
	if (q->front == NULL)
	{
		return;
	}
	else
	{
		q->rear = q->front;
		q->front->next = NULL;
	}
}

//链式存储实现队列的入队
void EnterQueue(LinkQueue* q, DataType x)
{
	LinkQueueNode* NewNode;
	NewNode = (LinkQueueNode*)malloc(sizeof(LinkQueueNode));
	if (NewNode != NULL)
	{
		NewNode->data = x;
		NewNode->next = NULL;
		q->rear->next = NewNode;
		q->rear = NewNode;
	}
	else
		return;
}

//链式存储实现队列的出队
void OutQueue(LinkQueue* q, DataType* x)
{
	LinkQueueNode* first = q->front->next;
	if (first == NULL)//队列为空
		return;
	if (first->next == NULL)//队列中只有一个元素
	{
		*x = first->data;
		q->rear = q->front;
		q->front->next = NULL;
	}
	else
	{
		*x = first->data;
		q->front->next = first->next;
	}
	free(first);
	first = NULL;
}

void Print_Link_Queue(LinkQueue* q)
{
	LinkQueueNode* cur = q->front;
	if (q->front == q->rear)
		return;
	while (cur != q->rear)
	{
		cur = cur->next;
		printf("%d ", cur->data);
	}
	printf("\n");
}


//顺序存储实现队列的初始化、入栈、出栈操作
#define Size 20
typedef struct
{
	DataType arr[Size];
	int front;
	int rear;
}SeqQueue;

//顺序存储实现循环队列的初始化
void SInitQueue(SeqQueue* q)
{
	q->front = q->rear = 0;
}

//顺序存储实现循环队列的入队
int SEnterQueue(SeqQueue* q, DataType data)
{
	if ((q->rear + 1) % Size == q->front)//队列满
		return 0;

	q->arr[q->rear] = data;
	q->rear = (q->rear + 1) % Size;
	return 1;
}

//顺序存储实现循环队列的出队
int SOutQueue(SeqQueue* q, DataType* x)
{
	if (q->front == q->rear)//队列空
		return 0;
	*x = q->arr[q->front];
	q->front = (q->front + 1) % Size;
	return 1;
}

void Print_SQueue(SeqQueue* q)
{
	int i = q->front;
	if (q->front == q->rear)
	{
		printf("此时队列为空！\n");
	}
	while (i != q->rear)
	{
		printf("%d ", q->arr[i]);
		i++;
		i = i % Size;
	}
	printf("\n");
}
void menu()
{
		printf("\n");
		printf("\t   栈的链式存储         栈的顺序存储    \n");
		printf("\t----------------------------------------\n");
		printf("\t|      1.入栈        |      3.入栈     |\n");
		printf("\t|      2.出栈        |      4.出栈     |\n");
		printf("\t----------------------------------------\n");
		printf("\n");
		printf("\t   队列的链式存储       队列的顺序存储  \n");
		printf("\t----------------------------------------\n");
		printf("\t|      5.入队       |     7.入队        |\n");
		printf("\t|      6.出队       |     8.出队        |\n");
		printf("\t----------------------------------------\n");
}

int main()
{
	int n = 0;
	DataType a;
	LinkQueue q;
	SeqQueue q1;
	SeqStack s;
	LinkStackNode* head = NULL;

	menu();
	while (1)
	{
		printf("请选择：>");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			printf("链栈入栈过程：\n");
			InitStack_Link(&head);
			Push_Link(head, 1);
			Print(head);
			Push_Link(head, 2);
			Print(head);
			Push_Link(head, 3);
			Print(head);
			Push_Link(head, 4);
			Print(head);
			Push_Link(head, 5);
			Print(head);
			Push_Link(head, 6);
			Print(head);

			break;
		case 2:
			printf("链栈出栈过程：\n");
			InitStack_Link(&head);
			Push_Link(head, 1);
			Push_Link(head, 2);
			Push_Link(head, 3);
			Push_Link(head, 4);
			Push_Link(head, 5);
			Push_Link(head, 6);
			Print(head);

			Pop_Link(head, &a);
			Print(head);
			Pop_Link(head, &a);
			Print(head);
			Pop_Link(head, &a);
			Print(head);
			Pop_Link(head, &a);
			Print(head);
			Pop_Link(head, &a);
			Print(head);
			Pop_Link(head, &a);
			Print(head);
			break;
		case 3:
			printf("顺序栈入栈过程：\n");
			InitStack_Seq(&s);
			Push_Seq(&s, 7);
			Print_Seq_Stack(s);
			Push_Seq(&s, 8);
			Print_Seq_Stack(s);
			Push_Seq(&s, 9);
			Print_Seq_Stack(s);
			Push_Seq(&s, 10);
			Print_Seq_Stack(s);
			Push_Seq(&s, 11);
			Print_Seq_Stack(s);
			Push_Seq(&s, 12);
			Print_Seq_Stack(s);
			break;
		case 4:
			printf("顺序栈出栈过程：\n");
			InitStack_Seq(&s);
			Push_Seq(&s, 7);
			Push_Seq(&s, 8);
			Push_Seq(&s, 9);
			Push_Seq(&s, 10);
			Push_Seq(&s, 11);
			Push_Seq(&s, 12);
			Print_Seq_Stack(s);

			Pop_Seq(&s, &a);
			Print_Seq_Stack(s);
			Pop_Seq(&s, &a);
			Print_Seq_Stack(s);
			Pop_Seq(&s, &a);
			Print_Seq_Stack(s);
			Pop_Seq(&s, &a);
			Print_Seq_Stack(s);
			Pop_Seq(&s, &a);
			Print_Seq_Stack(s);
			Pop_Seq(&s, &a);
			Print_Seq_Stack(s);
			break;
		case 5:
			printf("链队列入队过程：\n");
			InitQue(&q);
			EnterQueue(&q, 2);
			Print_Link_Queue(&q);
			EnterQueue(&q, 4);
			Print_Link_Queue(&q);
			EnterQueue(&q, 6);
			Print_Link_Queue(&q);
			EnterQueue(&q, 8);
			Print_Link_Queue(&q);
			EnterQueue(&q, 10);
			Print_Link_Queue(&q);
			EnterQueue(&q, 12);
			Print_Link_Queue(&q);
			break;
		case 6:
			printf("链队列出队过程：\n");
			InitQue(&q);
			EnterQueue(&q, 12);
			EnterQueue(&q, 10);
			EnterQueue(&q, 8);
			EnterQueue(&q, 6);
			EnterQueue(&q, 4);
			EnterQueue(&q, 2);
			Print_Link_Queue(&q);

			OutQueue(&q, &a);
			Print_Link_Queue(&q);
			OutQueue(&q, &a);
			Print_Link_Queue(&q);
			OutQueue(&q, &a);
			Print_Link_Queue(&q);
			OutQueue(&q, &a);
			Print_Link_Queue(&q);
			OutQueue(&q, &a);
			Print_Link_Queue(&q);
			OutQueue(&q, &a);
			Print_Link_Queue(&q);
			break;
		case 7:
			printf("循环队列入队过程：\n");
			SInitQueue(&q1);
			SEnterQueue(&q1, 1);
			Print_SQueue(&q1);
			SEnterQueue(&q1, 3);
			Print_SQueue(&q1);
			SEnterQueue(&q1, 5);
			Print_SQueue(&q1);
			SEnterQueue(&q1, 7);
			Print_SQueue(&q1);
			SEnterQueue(&q1, 9);
			Print_SQueue(&q1);
			break;
		case 8:
			printf("循环队列出队过程：\n");
			SInitQueue(&q1);
			SEnterQueue(&q1, 9);
			SEnterQueue(&q1, 7);
			SEnterQueue(&q1, 5);
			SEnterQueue(&q1, 3);
			SEnterQueue(&q1, 1);
			Print_SQueue(&q1);

			SOutQueue(&q1, &a);
			Print_SQueue(&q1);
			SOutQueue(&q1, &a);
			Print_SQueue(&q1);
			SOutQueue(&q1, &a);
			Print_SQueue(&q1);
			SOutQueue(&q1, &a);
			Print_SQueue(&q1);
			break;
		default:
			printf("选择错误，请重新选择！\n");
		}
	}
	system("pause:");
	return 0;
}

