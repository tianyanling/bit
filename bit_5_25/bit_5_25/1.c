#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//1.编程，输出字符串str中最长的单词
//2.编程，输出字符串A和字符串B中公共单词
//int main()
//{
//	char str[] = "you are,a.student";
//	char str1[] = "i am,a.student";
//	char seq[] = "  , .";
//	char *tok = NULL;
//	for (tok = strtok(str, seq); tok != NULL; tok = strtok(NULL, seq))
//	{
//		//puts(tok);
//		if ()
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char str1[20];
//	char str2[] = "1234";
//	gets(str1);
//	strncat(str1, str2, 3);
//	system("pause");
//	return 0;
//}

char *my_strstr(const char*str1, const char*str2)
{
	char *p = (char*)str1;
	char *s1= (char*)str1;
	char *s2 = (char*)str2;
	assert(str1 != NULL);
	if (str2 == NULL)
	{
		return NULL;
	}
	while (*p)
	{
		s1 = p;
		s2 = (char*)str2;//重新回到开头
		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return p;
		}
		p++;
	}
	return NULL;
}
int main1()
{
	char str1[]="abcdefghgggg";
	char str2[] = "bcdefgh";
	char *p = NULL;
	if (p =my_strstr (str1, str2))
	{
		puts(p);
	}
	system("pause");
	return 0;
}