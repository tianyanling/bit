#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include "MailList.h"

int inputData()
{
	printf("请输入姓名：\n");
	scanf("%19s", g_allMsg[g_count].name);
	getchar();
	printf("请输入性别(f/m):\n");
	scanf("%c", &g_allMsg[g_count].sex);
	printf("请输入年龄:\n");
	scanf("%d", &g_allMsg[g_count].age);
	printf("请输入电话号码:\n");
	scanf("%29s", g_allMsg[g_count].telnum);
	printf("请输入地址:\n");
	scanf("%199s", g_allMsg[g_count].addr);
	g_count++;
}

void outputData()
{
	int i;
	printf("姓名          性别   年龄   电话           地址");
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

