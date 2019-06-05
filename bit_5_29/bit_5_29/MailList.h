
#ifndef _MAILLIST_H_
#define  _MAILLIST_H_  1000

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
	char name[20];
	char sex;
	char telnum[30];
	char addr[200];
	int age;
}allMsg[1000];


extern struct MailList g_allMsg[1000];
extern int g_count;

void inputData();
int outputData();
void searchData();
#endif