#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "MailList.h"

void inputData()
{
	printf("������������\n");
	scanf("%19s", g_allMsg[g_count].name);
	getchar();
	printf("�������Ա�(f/m):\n");
	scanf("%c", &g_allMsg[g_count].sex);
	printf("����������:\n");
	scanf("%d", &g_allMsg[g_count].age);
	printf("������绰����:\n");
	scanf("%29s", g_allMsg[g_count].telnum);
	printf("�������ַ:\n");
	scanf("%199s", g_allMsg[g_count].addr);
	int i,j;
	for (i = 0; i < g_count; i++)
	{
		if (strcmp(g_allMsg[i].name, g_allMsg[g_count].name) > 0)
		{
			break;
		}
	}
	for (j = g_count; j > i; j--)
	{
		g_allMsg[j] = g_allMsg[j - 1];
	}
	g_allMsg[i] = g_allMsg[g_count];
	g_count++;
}

void searchData(char* find)
{
	int i,flag;
	int count = 0;
	char age[4] = { 0 };
	char* ret;
	for (i = 0; i < g_count; i++)
	{
		do
		{
			flag = 1;
			ret = strstr(g_allMsg[i].name, find);
			if (ret)
			{
				break;
			}

			ret = strstr(g_allMsg[i].addr, find);
			if (ret)
			{
				break;
			}

			ret = strstr(g_allMsg[i].telnum, find);
			if (ret)
			{
				break;
			}

			sprintf(age, "%d", g_allMsg[i].age);//printf��ӡ����Ļ�ϣ�sprintf��Ҫ��ӡ����Ļ�ϵ��ַ������ַ����У��÷�һ��
			if (!strcmp(age, find))
			{
				break;
			}

			flag = 0;
		} while (0);
		if (flag)
		{
			printf("%-10s          %3c   %3d   %11s   %s\n",
				g_allMsg[i].name,
				g_allMsg[i].sex,
				g_allMsg[i].age,
				g_allMsg[i].telnum,
				g_allMsg[i].addr);
			count++;
		}
	}
	if (count)
	{
		printf("���ҵ�%d������\n", count);
	}
	else
	{
		printf("û���ҵ���������������\n");
	}
}

int deleteData(char* str)
{

}

int outputData()
{
	int i;
	if (g_count = 0)
	{
		printf("û������\n");
		return 0;
	}
	printf("����          �Ա�   ����   �绰           ��ַ\n");
	for (i = 0; i < g_count; i++)
	{
		printf("%-10s          %3c   %3d   %11s   %s\n",
					g_allMsg[i].name,
					g_allMsg[i].sex,
					g_allMsg[i].age,
					g_allMsg[i].telnum,
					g_allMsg[i].addr);
	}
}

