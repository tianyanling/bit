#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

/////////////��ʽ�洢ʵ��ջ�ĳ�ʼ������ջ����ջ///////////////////
typedef int DataType;
typedef struct Node
{
	DataType data;
	struct Node* next;
}LinkStackNode, *LinkStack;

//��ʽ�洢ʵ��ջ�ĳ�ʼ��
void InitStack_Link(LinkStack* top)
{
	LinkStackNode *tmp = (LinkStackNode *)malloc(sizeof(LinkStackNode));//ͷ���
	if (tmp == NULL)
		return;
	tmp->data = 0;
	tmp->next = NULL;
	*top = tmp;
}

//��ʽ�洢ʵ��ջ����ջ
void Push_Link(LinkStack top, DataType x)
{
	LinkStackNode* tmp;
	tmp = (LinkStackNode*)malloc(sizeof(LinkStackNode));//����ռ�
	if (tmp == NULL)
		return;
	tmp->data = x;
	tmp->next = top->next;
	top->next = tmp;//�޸�ջ��ָ��
}

//��ʽ�洢ʵ��ջ�ĳ�ջ
void Pop_Link(LinkStack top, DataType* x)
{
	LinkStackNode* tmp;
	tmp = top->next;
	if (tmp == NULL)//��ջ
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

////////////////˳��洢ʵ��ջ�ĳ�ʼ������ջ����ջ����/////////////
#define Size 20
typedef struct
{
	DataType arr[Size];
	int top;
}SeqStack;

//˳��洢ʵ��ջ�ĳ�ʼ��
void InitStack_Seq(SeqStack* s)
{
	s->top = -1;//��ջ
}

//˳��洢ʵ��ջ����ջ
int Push_Seq(SeqStack* s, DataType x)
{
	if (s->top == Size - 1)//ջ��
		return 0;
	s->top++;
	s->arr[s->top] = x;
	return 1;
}

//˳��洢ʵ��ջ�ĳ�ջ
int Pop_Seq(SeqStack* s, DataType* x)
{
	if (s->top == -1)//ջ��
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

//////////������ʽ�洢ʵ�ֶ��еĳ�ʼ������ӡ����Ӳ���////////////
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

//��ʽ�洢ʵ�ֶ��еĳ�ʼ��
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

//��ʽ�洢ʵ�ֶ��е����
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

//��ʽ�洢ʵ�ֶ��еĳ���
void OutQueue(LinkQueue* q, DataType* x)
{
	LinkQueueNode* first = q->front->next;
	if (first == NULL)//����Ϊ��
		return;
	if (first->next == NULL)//������ֻ��һ��Ԫ��
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


//˳��洢ʵ�ֶ��еĳ�ʼ������ջ����ջ����
#define Size 20
typedef struct
{
	DataType arr[Size];
	int front;
	int rear;
}SeqQueue;

//˳��洢ʵ��ѭ�����еĳ�ʼ��
void SInitQueue(SeqQueue* q)
{
	q->front = q->rear = 0;
}

//˳��洢ʵ��ѭ�����е����
int SEnterQueue(SeqQueue* q, DataType data)
{
	if ((q->rear + 1) % Size == q->front)//������
		return 0;

	q->arr[q->rear] = data;
	q->rear = (q->rear + 1) % Size;
	return 1;
}

//˳��洢ʵ��ѭ�����еĳ���
int SOutQueue(SeqQueue* q, DataType* x)
{
	if (q->front == q->rear)//���п�
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
		printf("��ʱ����Ϊ�գ�\n");
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
		printf("\t   ջ����ʽ�洢         ջ��˳��洢    \n");
		printf("\t----------------------------------------\n");
		printf("\t|      1.��ջ        |      3.��ջ     |\n");
		printf("\t|      2.��ջ        |      4.��ջ     |\n");
		printf("\t----------------------------------------\n");
		printf("\n");
		printf("\t   ���е���ʽ�洢       ���е�˳��洢  \n");
		printf("\t----------------------------------------\n");
		printf("\t|      5.���       |     7.���        |\n");
		printf("\t|      6.����       |     8.����        |\n");
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
		printf("��ѡ��>");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			printf("��ջ��ջ���̣�\n");
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
			printf("��ջ��ջ���̣�\n");
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
			printf("˳��ջ��ջ���̣�\n");
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
			printf("˳��ջ��ջ���̣�\n");
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
			printf("��������ӹ��̣�\n");
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
			printf("�����г��ӹ��̣�\n");
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
			printf("ѭ��������ӹ��̣�\n");
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
			printf("ѭ�����г��ӹ��̣�\n");
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
			printf("ѡ�����������ѡ��\n");
		}
	}
	system("pause:");
	return 0;
}

