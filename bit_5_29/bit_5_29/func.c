#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include "MailList.h"

int inputData()
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
	g_count++;
}

void outputData()
{
	int i;
	printf("����          �Ա�   ����   �绰           ��ַ");
	for (i = 0; i < g_count; i++)
	{
	printf("%-10s          %3c   %3d   %11s   %s\n");
	g_allMsg[i].name;
	g_allMsg[i].sex;
	g_allMsg[i].age;
	g_allMsg[i].telnum;
	g_allMsg[i].addr;
	}
}

