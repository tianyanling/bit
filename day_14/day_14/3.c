//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int judge(char *s1,char *s2)
{
	int len = strlen(s1);
	for (int i = 0; i < len; i++)
	{
		char tmp = s1[0];
		for (int j = 0; j < len - 1; j++)
		{
			s1[j] = s1[j + 1];
		}
		s1[len - 1] = tmp;
		if (0 == strcmp(s1, s2))
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	char s1[] = "AABCD";
	char s2[] = "BCDAA";
	int ret=judge(s1, s2);
	if (ret == 1)
	{
		printf("s2是s1旋转后的字符串！\n");
	}
	else
	{
		printf("s2不是s1旋转后的字符串！\n");
	}
	system("pause");
	return 0;
}