#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include"MailList.h"
#include<malloc.h>

//struct MailList  g_allMsg[1000];
//int g_count;
//全局变量加g_,表示是全局变量(默认赋0)
//static的全局变量加s_

int menu()
{
	int ret, tmp;
	printf(  "1.添加联系人信息\n"
				"2.删除指定联系人信息\n"
				"3.查找指定联系人信息\n"
				"4.修改指定联系人信息\n"
				"5.显示指定联系人信息\n"
				"6.清空所有联系人信息\n"
				"请输入选项：");
	ret=scanf("%d", &tmp);
	return ret ? tmp : -1;
}

void MailList()
{
	char str[256] = { 0 };
	int op;
	while (1)
	{
		op = menu();
		switch (op)
		{
		case ADD_MSG:
			inputData();
			break;
		case DELETE_MSG:
			printf("请输入你要删除的条目：\n");
			break;
		case SEARCH_MSG:
			printf("请输入要检索的字符串：\n");
			scanf("%s", str);
			searchData(str);
			break;
		case CHANGE_MSG:
			break;
		case DISPLAY_MSG:
			outputData();
			break;
		case EMPTY_MSG:
			break;
		default:
			printf("输入错误，请重新输入！\n");
		}
	}
}

int main()
{
	MailList();
	system("pause");
	return 0;
}