//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

//˼·һ
//�Ѹ��ַ������ƣ�strcpy����������һ��strcat��,�ٿ�ԭ�ַ����Ƿ������ַ�����

//˼·��
//�ַ�������ת������strcmp���бȽ�

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//˼·һ����
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

//˼·������

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
//		printf("s2��s1��ת����ַ�����\n");
//	}
//	else
//	{
//		printf("s2����s1��ת����ַ�����\n");
//	}
//	system("pause");
//	return 0;
//}
