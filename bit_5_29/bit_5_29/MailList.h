#include<stdio.h>
#include<stdlib.h>

#ifndef _MAILLIST_H_
#define  _MAILLIST_H_
 
struct MailList g_allMsg[1000];
int g_count;
//ȫ�ֱ�����g_,��ʾ��ȫ�ֱ���(Ĭ�ϸ�0)
//static��ȫ�ֱ�����s_

enum
{
	ADD_MSG = 1,
	DELETE_MSG,
	SEARCH_MSG,
	CHANGE_MSG,
	DISPLAY_MSG,
	EMPTY_MSG
};

struct MailList
{
	char name[20];
	char sex;
	char telnum[30];
	char addr[200];
	int age;
}allMsg[1000];

#endif