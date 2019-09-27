#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//struct
//{
//	int num;
//	char name[20];
//	int age;
//}aa;//声明变量名

//struct student
//{
//	int num;
//	char name[20];
//	int age;
//	char sex;
//};
//
//struct data
//{
//	char a;//1	4
//	int  b;//4					16
//	char c;//1	4
//	double d;//8			16+8=24
//	//内存对齐问题
//	//如果小的在一边，则所有小的之和和大的对齐
//	//如果小的在两边，则每个小的均与大的对齐
//};

//typedef struct student
////typedef给变量起个别名
//{
//	int num;
//	char name[20];
//}STU;//STU表示struct student
//
//int main()
//{
//	struct student a;
//	printf("%d\n", sizeof(struct student));
//	system("pause");
//	return 0;
//}
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
////不可行
////解决方案
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	printf("%d\n", sizeof(Node));
//	system("pause");
//	return 0;
//}

//struct s1
//{
//	char c1;
//	int c2;
//	char c3;
//};
//
//struct s2
//{
//	char c1; 
//	char c2;
//	int c3;
//};
//struct s3
//{
//	struct s2 a;//不应该以嵌套结构体的字节为主
//	int b;
//	double c;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct s2,c1));
//	printf("%d\n", offsetof(struct s2, c2));
//	printf("%d\n", offsetof(struct s2, c3));
//	system("pause");
//	return 0;
//}

//typedef struct student
//{
//	int num;
//	char name[20];//数组名不能赋值
//	char sex;
//}STU;


//int main()
//{
//	STU a = { 1, "tianduidui", 'f' };
//	STU b;
//	STU c;
//	STU *p = &a;
//	b.num = 2;
//	strcpy(b.name, "chensunsun");
//	b.sex = 'm';
//	printf("%d,%s,%c\n", a.num, a.name, a.sex);
//	c = a;
//	printf("%d,%s,%c\n", c.num, c.name, c.sex);
//	printf("%d,%s,%c\n", p->num, (*p).name, p->sex);
//	system("pause");
//	return 0;
//}

//#pragma pack(1)
//struct data
//{
//	int a;
//	char c;
//};
//#pragma pack()
//int main2()
//{
//	printf("%d\n", sizeof(struct data));
//	system("pause");
//	return 0;
//}

//位段
//struct A
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	printf("%d\n", sizeof(s));
//	system("pause");
//	return 0;
//}

//枚举类型
//enum week
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
////枚举类型如果不赋值，则默认从0开始
////只给一个赋值，则从所赋的值开始后面的依次加1
//int main()
//{
//	enum week w;
//	w = Thur;
//	printf("%d\n", w);
//	system("pause");
//	return 0;
//}
//enum Sex//性别
//{
//	MALE,
//	FEMALE,
//	SECRET
//}；


//联合体

//union data
//{
//	int a;
//	char b;
//	double c;
//};
//
//int main()
//{
//	union data aa;
//	//printf("%d\n", sizeof(union data));//共用体谁的值最大就是谁的值
//	printf("%p\n", &(aa, a));
//	printf("%p\n", &(aa, b));
//	printf("%p\n", &(aa, c));
//	system("pause");
//	return 0;
//}

//union data
//{
//	int i;
//	char c;
//};
//
//int main()
//{
//	union data d;
//	d.i = 0x11223344;
//	d.c = 0x55;
//	printf("%x\n", d.i);//11223355
//	system("pause");
//	return 0;
//}

//判断大端小端
//int sys_check()
//{
//	int a = 1;
//	return *((char*)&a);
//}
//int main()
//{
//	int n = sys_check();
//	if (n == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	system("pause");
//	return 0;
//}

