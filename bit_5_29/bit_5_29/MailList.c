#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include"MailList.h"

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
	int op;
	op = menu();
	switch (1)
	{
	case ADD_MSG:
		break;
	case DELETE_MSG:
		break;
	case SEARCH_MSG:
		break;
	case CHANGE_MSG:
		break;
	case DISPLAY_MSG:
		break;
	case EMPTY_MSG:
		break;
	default:
		printf("输入错误，请重新输入！\n");
	}
}