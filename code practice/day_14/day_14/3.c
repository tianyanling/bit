//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

//思路一
//把该字符串复制（strcpy）在连接在一起（strcat）,再看原字符串是否在新字符串中

//思路二
//字符串先旋转，再用strcmp进行比较

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//思路一代码
int find_round(char *src, char *find)
{
	char tmp[256] = { 0 };
	strcpy(tmp, src);
	strcat(tmp, src);
	return strstr(tmp, find) ? 1 : 0;
}
void main()
{
	printf("%d\n", find_round("ABCDE", "DDABC"));
	system("pause");
}

//思路二代码

//int judge(char *s1,char *s2)
//{
//	int len = strlen(s1);
//	for (int i = 0; i < len; i++)
//	{
//		char tmp = s1[0];
//		for (int j = 0; j < len - 1; j++)
//		{
//			s1[j] = s1[j + 1];
//		}
//		s1[len - 1] = tmp;
//		if (0 == strcmp(s1, s2))
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char s1[] = "AABCD";
//	char s2[] = "BCDAA";
//	int ret=judge(s1, s2);
//	if (ret == 1)
//	{
//		printf("s2是s1旋转后的字符串！\n");
//	}
//	else
//	{
//		printf("s2不是s1旋转后的字符串！\n");
//	}
//	system("pause");
//	return 0;
//}
