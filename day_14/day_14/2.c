//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void leftturn(char *pstr1, int sz1, int k1)
{
	for (int i = 0; i < k1; i++)
	{
		char tmp = pstr1[0];		//��һ��Ԫ�ظ���temp
		for (int j = 0; j < sz1 - 1; j++)
		{
			pstr1[j] = pstr1[j + 1];		//�����Ԫ��һ����ǰ�ƶ�һλ
		}
		pstr1[sz1 - 1] = tmp;
	}
}

void rightturn(char *pstr2, int sz2, int k2)
{
	for (int i = 0; i < k2; i++)
	{
		char tmp = pstr2[sz2-1];
		for (int j = sz2-1; j >0; j--)
		{
			pstr2[j] = pstr2[j - 1];
		}
		pstr2[0] = tmp;
	}
}

int main2()
{
	char str1[] = "AABCD";
	char str2[] = "ABCDEF";
	int k1,k2;
	printf("	��������Ҫ�����ַ��ĸ�����");
	scanf("%d", &k1);
	printf("	��������Ҫ�����ַ��ĸ�����");
	scanf("%d", &k2);
	int sz1 = sizeof(str1) / sizeof(str1[0]) - 1;
	int sz2 = sizeof(str2) / sizeof(str2[0]) - 1;
	leftturn(str1, sz1, k1);
	rightturn(str2, sz2, k2);
	printf("%s\n", str1);
	printf("%s\n", str2);
	system("pause");
	return 0;
}
