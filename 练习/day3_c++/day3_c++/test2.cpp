#include<iostream>
#include<stdbool.h>
using namespace std;

#define woman 1
#define man 0
/*3�������½ṹ�� 

struct student{ 
 char name[32]; 
 int age; 
 int class; 
 bool sex; 
}; 

д���������ú������صķ�ʽ��д����ͳ�Ƴ�һ���������ṹΪ��׼�Ľṹ�������У� 
1������ΪX�ĳ����˶��ٴ� 
2������ΪX�ĳ����˶��ٴ� 
3���༶ΪX�ĳ����˶��ٴ� 
4���Ա��X�ĳ����˶��ٴ� 

���磺����ΪX�Ŀ����������������� 
int countName(student * src, int n, char * name); 
tip:���Կ�����ȱʡ�����ķ�ʽ�����߻ص������ķ�ʽʵ�֡�*/

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
	char a[] = { 18,17,18,16,19,18,15,16,18 };//����
	char b[] = { 1,2,3,4,1,2,5,6,4,8 };//�༶
	char s[] = { 1,1,1,10,0,1,0,0,0,1 };//�Ա�1��ʾŮ��0��ʾ��

	cout << countAge(m,sizeof(m) / sizeof(m[0]), zhang) << endl;
	cout << countAge(a, sizeof(a) / sizeof(a[0]), 16) << endl;
	cout << countClass(b, sizeof(b) / sizeof(b[0]), 1) << endl;
	cout << countClass(s, sizeof(s) / sizeof(s[0]), 1) << endl;
	system("pause");
	return 0;
}
