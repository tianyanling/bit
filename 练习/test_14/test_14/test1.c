#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

#if 0
int main()
{
	struct student
	{
		char name[10];
		int age;
		char gender;
	}std[3],*p=std;
	scanf("%d ", &(*p).age);
	scanf("%c", &std[0].gender);
	scanf("%c", &(p->gender));
	scanf("%c",&std->name);
	system("pause");
	return 0;
}
#endif