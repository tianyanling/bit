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