//4.编写一个程序，可以一直接收键盘字符， 如果是小写字符就输出对应的大写字符，如果接收的是大写字符,
//就输出对应的小写字符，如果是数字不输出。
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#define isSmallLetter(ch) ((ch) <='z' && (ch) >= 'a' )			//宏定义

inline int isBigLetter(char ch)			//内联函数，可以当做一段代码直接插入，不看作函数
{
	return ch <= 'Z' && ch >= 'A';
}
int main5()
{
	char ch;
	printf("请输入一个字符：\n");
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'a' && ch <= 'z')
		{
			putchar(ch - 32);			//若不是ASCII码，用（'a' - 'A'）
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			putchar(ch + 32);
		}
		else if (ch >= '0' && ch <= '9')
		{
			//do nothing
		}
		else if (ch == '@')
		{
			break;
		}
		else
		{
			putchar(ch);
		}
	}
	system("pause");
	return 0;
}