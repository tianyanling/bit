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
////初始化
//void InitStack(LinkStack *s){
//	s->count = 0;
//}
////入栈
//int Push(LinkStack *s, SElemType e){
//	LinkStackPtr p = (LinkStackPtr)malloc(sizeof(StackNode));
//	//如果栈空，则next为NULL,否则，next为上一次的栈顶元素
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
//		printf("第%d个元素值是：%d\n", i, p->data);
//		p = p->next;
//		i++;
//	}
//	printf("一共有%d个元素\n", s->count);
//}
////判断是否为空
//int StackEmpty(LinkStack s){
//	if (s.count == 0)
//		return 1;
//	else
//		return -1;
//}
////删除s的栈顶元素，用e返回其值
//int Pop(LinkStack *s, SElemType *e){
//	LinkStackPtr p;
//	if (StackEmpty(*s))
//		return -1;
//	*e = s->top->data;
//	//栈顶节点赋值给p
//	p = s->top;
//	//栈顶指针下移一位
//	s->top = s->top->next;
//	free(p);
//	s->count--;
//	return 1;
//}
////main函数
//int main() {
//	LinkStack s;
//	InitStack(&s);
//	SElemType e;
//	int x;
//	printf("请输入要入栈多少个元素：");
//	scanf("%d", &x);
//	printf("请输入入栈的元素值：");
//	for (int i = 0; i < x; ++i) {
//		scanf("%d", &e);
//		Push(&s, e);
//	}
//	OutputStack(&s);
//	Pop(&s, &e);
//	printf("出栈的元素是：%d\n", e);
//	OutputStack(&s);
//	system("pause");
//	return 0;
//}
