#include<iostream>
#include<stdbool.h>
using namespace std;

#define woman 1
#define man 0
/*3、有以下结构： 

struct student{ 
 char name[32]; 
 int age; 
 int class; 
 bool sex; 
}; 

写出函数，用函数重载的方式编写程序，统计出一个以上述结构为基准的结构体数组中： 
1、名字为X的出现了多少次 
2、年龄为X的出现了多少次 
3、班级为X的出现了多少次 
4、性别的X的出现了多少次 

例如：名字为X的可以是这样的声明： 
int countName(student * src, int n, char * name); 
tip:可以考虑用缺省参数的方式，或者回调函数的方式实现。*/

struct student {
	char name[32];
	int age;
	int classes;
	bool sex;
};

enum
{
	zhang,
	wang,
	li,
	zhao,
	qian
};

int countName(char * m, int len, char  name)
{
	int i;
	int count = 0;
	for (i = 0; i < len; i++)
	{
		if (name == m[i])
		{
			count++;
		}
	}
	return count;
}

int countAge(char * a, int n, char  age)
{
	int i;
	int count = 0;
	for (i = 0; i < n; i++)
	{
		if (age == a[i] )
		{
			count++;
		}
	}
	return count;
}

int countClass(char * b, int n, char  classes)
{
	int i;
	int count = 0;
	for (i = 0; i < n; i++)
	{
		if (classes == b[i])
		{
			count++;
		}
	}
	return count;
}

int countSex(char * s, int n, char  sex)
{
	int i;
	int count = 0;
	for (i = 0; i < n; i++)
	{
		if (sex == s[i])
		{
			count++;
		}
	}
	return count;
}

int main()
{
	char m[] = { zhang,wang,zhang,zhang,wang,li,zhao };
	char a[] = { 18,17,18,16,19,18,15,16,18 };//年龄
	char b[] = { 1,2,3,4,1,2,5,6,4,8 };//班级
	char s[] = { 1,1,1,10,0,1,0,0,0,1 };//性别，1表示女，0表示男

	cout << countAge(m,sizeof(m) / sizeof(m[0]), zhang) << endl;
	cout << countAge(a, sizeof(a) / sizeof(a[0]), 16) << endl;
	cout << countClass(b, sizeof(b) / sizeof(b[0]), 1) << endl;
	cout << countClass(s, sizeof(s) / sizeof(s[0]), 1) << endl;
	system("pause");
	return 0;
}
