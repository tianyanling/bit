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

bool cmpEql(student a, student b)
{
	return a.age == b.age;
}

bool cmpEqlname(student a, student b)
{
	return strcmp(a.name, b.name) ? false : true;
}

bool cmpEqlsex(student a, student b)
{
	return !(a.sex^b.sex);
}

int countS(student st, int n, bool(*cmp)(student, student) = cmpEql)
{
	int i;
	int count = 0;
	for (i = 0; i < n; i++)
	{
		if (cmpEql == st[i])
		{
			count++;
		}
	}
	return count;
}

int main()
{
	student st{};

	system("pause");
	return 0;
}