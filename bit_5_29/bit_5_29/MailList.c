#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include"MailList.h"
#include<malloc.h>

//struct MailList  g_allMsg[1000];
//int g_count;
//ȫ�ֱ�����g_,��ʾ��ȫ�ֱ���(Ĭ�ϸ�0)
//static��ȫ�ֱ�����s_

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
			printf("��������Ҫɾ������Ŀ��\n");
			break;
		case SEARCH_MSG:
			printf("������Ҫ�������ַ�����\n");
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
			printf("����������������룡\n");
		}
	}
}

int main()
{
	MailList();
	system("pause");
	return 0;
}