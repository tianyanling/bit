#ifndef _MAILLIST_H_
#define  _MAILLIST_H_  1000
//可以让自己写的头文件多次引用而不出现重定义

//extern int outputData();
//extern void intputData();
//extern void searchData();

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
	char name[50];
	char sex;
	char telnum[30];
	char addr[200];
	int age;
}allMsg[1000];


extern struct MailList g_allMsg[1000];
extern int g_count;

typedef struct
{
	struct MailList *alllMsg;
	int count;
	int limit;
}MailLists;

void inputData();
void outputData();
void searchData(char *find);
void outputSearchData(int *data);
int catchOneData(char *find);
void deleteOneData(int n);

#endif