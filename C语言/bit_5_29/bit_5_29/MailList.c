#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include"MailList.h"//ͷ�ļ����������Σ�������ض���
#include<malloc.h>

struct MailList g_allMsg[1000];
int g_count;
//ȫ�ֱ�����g_,��ʾ��ȫ�ֱ���(Ĭ�ϸ�0)
//static��ȫ�ֱ�����s_

int menu()
{
	int ret, tmp;
	printf("1.�����ϵ����Ϣ\n"
		"2.ɾ��ָ����ϵ����Ϣ\n"
		"3.����ָ����ϵ����Ϣ\n"
		"4.�޸�ָ����ϵ����Ϣ\n"
		"5.��ʾָ����ϵ����Ϣ\n"
		"6.���������ϵ����Ϣ\n"
		"������ѡ�");
	ret = scanf("%d", &tmp);//scanf��while�У��������a�ͻ������ѭ��
	return ret ? tmp : -1;
}

void MailList()
{
	int op, ret;
	char str[256] = { 0 };
	int searchRes[1001] = { 0 };
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
			memset(str, 0, sizeof(str));
			scanf("%s", str);
			ret = catchOneData(str);
			if (ret > 0)
			{
				deleteOneData(ret);
				printf("ɾ���ɹ�\n");
			}
			else
			{
				printf("ɾ��ʧ��\n");
			}
			break;
		case SEARCH_MSG:
			printf("������Ҫ�������ַ�����\n");
			memset(str, 0, sizeof(str));
			memset(searchRes, 0, sizeof(searchRes));
			scanf("%s", str);
			searchData(str, searchRes);
			outputSearchData(searchRes);
			printf("���ҵ�%d������\n", searchRes);
			break;
		case CHANGE_MSG:
			break;
		case DISPLAY_MSG:
			outputData();
			break;
		case EMPTY_MSG:
			memset(g_allMsg, 0, g_count * sizeof(struct MailList));
			g_count = 0;
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
