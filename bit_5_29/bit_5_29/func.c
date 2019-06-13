#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include "MailList.h"
//双引号既可以引自己的也可以引库里的

void inputData()
{
	struct MailList tmp;
	printf("请输入姓名：\n");
	scanf("%49s", tmp.name);
	getchar();
	printf("请输入性别(f/m):\n");
	scanf("%c", &tmp.sex);
	printf("请输入年龄:\n");
	scanf("%d", &tmp.age);
	printf("请输入电话号码:\n");
	scanf("%29s", tmp.telnum);
	printf("请输入地址:\n");
	scanf("%199s", tmp.addr);

	int i,j;
	for (i = 0; i < g_count; i++)
	{
		if (strcmp(g_allMsg[i].name, tmp.name) > 0)
		{
			break;
		}
	}
	for (j = g_count; j > i; j--)
	{
		g_allMsg[j] = g_allMsg[j - 1];
	}
	g_allMsg[i] = tmp;

	g_count++;
}

void searchData(char* find,int * searchres)
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

			sprintf(age, "%d", g_allMsg[i].age);//printf打印在屏幕上，sprintf将要打印在屏幕上的字符放在字符串中，用法一致
			if (!strcmp(age, find))
			{
				break;
			}

			flag = 0;
		} while (0);

		if (flag)
		{
			searchres[0]++;
			searchres[searchres[0]] = i;
		}
	}
	if (count)
	{
		printf("共找到%d条数据\n", count);
	}
	else
	{
		printf("没有找到符合条件的数据\n");
	}
}

void outputData()
{
	int i;
	if (g_count = 0)
	{
		printf("没有数据\n");
		return ;
	}
	printf("姓名          性别   年龄         电话            地址\n");
	for (i = 0; i < g_count; i++)
	{
		printf("%-10s   %3c     %3d       %11s       %s\n",
			g_allMsg[i].name,
			g_allMsg[i].sex,
			g_allMsg[i].age,
			g_allMsg[i].telnum,
			g_allMsg[i].addr);
	}
}

void outputSearchData(int * data)
{
	int i;
	if (data[0] = 0)
	{
		printf("没有符合条件的数据\n");
		return;
	}
	printf("姓名          性别   年龄         电话            地址\n");
	for (i = 0; i < g_count; i++)
	{
		printf("%2d %-10s   %3c     %3d       %11s       %s\n",
			g_allMsg[i].name,
			g_allMsg[i].sex,
			g_allMsg[i].age,
			g_allMsg[i].telnum,
			g_allMsg[i].addr);
	}
}

void deleteOneData(int n)
{
	int i;
	for (i = n; i < g_count; i++)
	{
		g_allMsg[i]=g_allMsg[i + 1];
	}
	g_count--;
}

int catchOneData(char * find)
{
	int schres[100] = { 0 };
	searchData(find, schres);
	if (schres[0] == 0)
	{
		return -1;
	}
	else if (schres[0] == 0)
	{
		return schres[1];
	}
	else
	{
		int i;
		outputSearchData(schres);
		printf("请输入你要删除第几条数据:\n");
		scanf("%d", &i);
		if (i<1 || i>schres[0])
		{
			return -1;
		}
		return schres[i];
	}
}
