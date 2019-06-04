//通讯录

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

enum menu
{
	EXIT,
	ADD,
	DEL,
	MODIFY,
	SEARCH,
	SORT,
	EMPTY,
	SHOW
};

#define NAME_SIZE 30
#define SEX_SIZE 5
#define ADDR_SIZE 100
#define TEL_SIZE 12
#define MAX 1000

typedef struct student
{
	char name[NAME_SIZE];
	char sex[SEX_SIZE];
	char addr[ADDR_SIZE];
	char tel[TEL_SIZE];
	short int age;
}Student;

typedef struct MailList
{
	Student data[MAX];//先初始化，不然是随机值
	//Student *data(用多少开辟多少空间)
	int size;
}MailList;

void menu()
{
	printf("====================================================\n");
	printf("************1.add                2.del*************\n");
	printf("************3.modify             4.search**********\n");
	printf("************5.sort               6.empty***********\n");
	printf("************7.show               0.exit************\n");
	printf("=====================================================\n");
}

void InitMailList(MailList *ml)
{
	assert(ml != NULL);//改变实参，要传地址，指针需要断言
	//ml->capacity=MAX;
	ml->size = 0;
	//ml->data=(Student*)malloc(sizeof(Student)*ml->capacity);
	memset(ml->data, 0, MAX*sizeof(Student));
}

//int IncCapacity(MailList *ml)
//{
//	Student *temp = NULL;
//	assert(ml != NULL);
//	ml->capacity = ml->capacity + MAX;
//	temp = (Student*)
//}

void AddMailListInfo(MailList *ml)
{
	assert(ml != NULL);
	if (ml->size >= MAX)
	{
		printf("通讯录已满，不能输入\n");
		return;
	}
	printf("请输入姓名，性别，年龄，住址，电话：\n");
	scanf("%s",ml->data[ml->size].name);//不能输入空格
	scanf("%s", ml->data[ml->size].sex);
	scanf("%d", &ml->data[ml->size].age);
	scanf("%s", ml->data[ml->size].addr);
	scanf("%s", ml->data[ml->size].tel);
	++ ml->size;
}

void Show(MailList *ml)
{
	assert(ml != NULL);
	int i;
	printf("%15s %5s %5s %10s %12s\n", "姓名", "性别", "年龄", "住址", "电话");
	for (i = 0; i < ml->size; i++)
	{
		printf("%15s %5s %3d %10s %12s\n", ml->data[i].name, ml->data[i].sex, ml->data[i].age, ml->data[i].addr, ml->data[i].tel);
	}
}

void Sort(MailList *ml)
{
	int i, j; 
	Student temp;
	assert(ml != NULL);
	for (i = 0; i < ml->size; i++)
	{
		for (j = 0; j < ml->size - 1 - i; j++)
		{
			if (strcmp(ml->data[j].name, ml->data[j + 1].name))
			{
				temp = ml->data[j];
				ml->data[j] = ml->data[j + 1];
				ml->data[j + 1] = temp;
			}
		}
	}
}

int FindName(MailList *ml,char name)
{

}

int IsEmpty(MailList *ml)
{

}

void DelMailListInfo(MailList *ml)
{
	int i, n;
	char name[NAME_SIZE];
	assert(ml != NULL);
	if (IsEmpty(ml))
	{
		printf("通讯录为空\n");
	}
	printf("请输入要删除信息的姓名:\n");
	scanf("%s", name);
	int n = FindName(ml, name);
	if (n == -1)
	{
		return;
	}
	//移动
	for (i = n; i < ml->size - 1; i++)
	{
		ml->data[i] = ml->data[i + 1];
	}
	ml->size++;
}

void Test()
{
	MailList ml;
	int input;
	InitMailList(&ml);
	menu();
	do
	{
		printf("请输入要实现的功能：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1://add
			AddMailListInfo(&ml);
			break;
		case 2:
			DelMailListInfo(&ml);
			break;
		case 3:
			//modifyMailListInfo(&ml);
			break;
		case 4:
			//SearchMailListInfo(&ml);//可以用值传递，但是相较于传地址效率低
			break;
		case 5:
			Sort(&ml);
			break;
		case 6:
			break;
		case 7:
			Show(&ml);
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}

int main()
{
	Test();
	system("pause");
	return 0;
}