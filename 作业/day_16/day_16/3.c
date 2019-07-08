//3.理解函数指针数组和定义，转移表

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int add(int a,int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a*b;
}
int Div(int a, int b)	//不可以用div
{
	return a / b;
}
//
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	while (input)
//	{
//		printf("*************************\n");
//		printf(" 1:add 2:sub \n");
//		printf(" 3:mul 4:Div \n");
//		printf("*************************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			break;
//		case 2:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			break;
//		case 3:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			break;
//		case 4:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//		printf("ret = %d\n", ret);
//	}
//	system("pause");
//	return 0;
//}

int main3()
{
	int x, y;
	int input = 1;
	int ret = 0;
	int(*p[5])(int x, int y) = { 0, add, sub, mul, Div }; //转移表
	while (input)
	{
		printf("*************************\n");
		printf(" 1:add 2:sub \n");
		printf(" 3:mul 4:Div \n");
		printf("*************************\n");
		printf("请选择：");
		scanf("%d", &input);
		if ((input <= 4 && input >= 1))
		{
			printf("输入操作数：");
			scanf("%d %d", &x, &y);
			ret = (*p[input])(x, y);
		}
		else
			printf("输入有误\n");
		printf("ret = %d\n", ret);
	}
	system("pausse");
	return 0;
}