//#define _CRT_SECURE_NO_WARNINGS 1#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef int SElemType;
//typedef struct StackNode{
//	SElemType data;
//	struct StackNode *next;
//}StackNode, *LinkStackPtr;
//typedef struct LinkStack{
//	LinkStackPtr top;
//	int count;
//}LinkStack;
////��ʼ��
//void InitStack(LinkStack *s){
//	s->count = 0;
//}
////��ջ
//int Push(LinkStack *s, SElemType e){
//	LinkStackPtr p = (LinkStackPtr)malloc(sizeof(StackNode));
//	//���ջ�գ���nextΪNULL,����nextΪ��һ�ε�ջ��Ԫ��
//	if (s->count == 0){
//		s->top = p;
//		p->data = e;
//		p->next = NULL;
//	}
//	else{
//		p->data = e;
//		p->next = s->top;
//		s->top = p;
//	}
//	s->count++;
//	return 1;
//}
//void OutputStack(LinkStack *s){
//	LinkStackPtr p;
//	p = s->top;
//	int i = 1;
//	while (p){
//		printf("��%d��Ԫ��ֵ�ǣ�%d\n", i, p->data);
//		p = p->next;
//		i++;
//	}
//	printf("һ����%d��Ԫ��\n", s->count);
//}
////�ж��Ƿ�Ϊ��
//int StackEmpty(LinkStack s){
//	if (s.count == 0)
//		return 1;
//	else
//		return -1;
//}
////ɾ��s��ջ��Ԫ�أ���e������ֵ
//int Pop(LinkStack *s, SElemType *e){
//	LinkStackPtr p;
//	if (StackEmpty(*s))
//		return -1;
//	*e = s->top->data;
//	//ջ���ڵ㸳ֵ��p
//	p = s->top;
//	//ջ��ָ������һλ
//	s->top = s->top->next;
//	free(p);
//	s->count--;
//	return 1;
//}
////main����
//int main() {
//	LinkStack s;
//	InitStack(&s);
//	SElemType e;
//	int x;
//	printf("������Ҫ��ջ���ٸ�Ԫ�أ�");
//	scanf("%d", &x);
//	printf("��������ջ��Ԫ��ֵ��");
//	for (int i = 0; i < x; ++i) {
//		scanf("%d", &e);
//		Push(&s, e);
//	}
//	OutputStack(&s);
//	Pop(&s, &e);
//	printf("��ջ��Ԫ���ǣ�%d\n", e);
//	OutputStack(&s);
//	system("pause");
//	return 0;
//}
