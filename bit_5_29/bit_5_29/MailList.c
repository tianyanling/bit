#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include"MailList.h"

int menu()
{
	int ret, tmp;
	printf(  "1.�����ϵ����Ϣ\n"
				"2.ɾ��ָ����ϵ����Ϣ\n"
				"3.����ָ����ϵ����Ϣ\n"
				"4.�޸�ָ����ϵ����Ϣ\n"
				"5.��ʾָ����ϵ����Ϣ\n"
				"6.���������ϵ����Ϣ\n"
				"������ѡ�");
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
		printf("����������������룡\n");
	}
}