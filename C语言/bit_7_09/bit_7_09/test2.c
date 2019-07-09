#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#if 0
int main()//一级指针
{
	//单指针指向所能取到的第一个元素的地址
	int a[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12 };
	int *p = &a[0][0];
	int i;
	for (i = 0; i < 3 * 4; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int a[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	int *p = &a[0][0];
	int i;
	int j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%2d ", *(p + 4 * i + j));
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
#endif

#if 0
//字符串与指针
int main()
{//字符指针
	char b[] = "1234";//把字符串1234存储在a开辟的五个字节的空间里
	char *p = "12345";//声明一个指针变量p指向一个字符串
	//char b[10];//只能初始化，不能赋值
	//char *p;//可以先定义变量，再赋值
	p = "123";
	b[3] = 'k';//可以改
	//*p = 'k';//不能改，即错误
	//p++;
	puts(b);
	puts(p);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	char a[] = "123";
	char b[] = "123";
	const char c[] = "123";
	const char d[] = "123";
	char *p = "123";
	char *q = "123";
	const char *pp = "123";
	const char *qq = "123";
	if (a == a)//数组名不一样，则表示数组存储的地址不一样
		printf("a==b\n");
	if (c == d)
		printf("c==d\n");
	if (p == q)
		printf("p == q\n");
	if (pp == qq)
		printf("pp == qq\n");
	if (p == pp)
		printf("p == pp\n");
	system("pause");//结果输出后三个
	return 0;
}
#endif