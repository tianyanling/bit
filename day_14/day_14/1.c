//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void levo(char *pstr, int sz, int k)
{
		int i = 0;
		int j = 0;
		for (i = 0; i < k; i++)
		{
			char tmp = pstr[0];
			for (j = 0; j < sz - 1; j++)
			{
				pstr[j] = pstr[j + 1];
			}
			pstr[sz - 1] = tmp;
		}
}

int main1()
{
	char str[] = "ABCD";
	int k;
	printf("	��������Ҫ��ת�ַ��ĸ�����");
	scanf("%d",&k);
	int sz = sizeof(str) / sizeof(str[0]) - 1;
	levo(str, sz, k);
	printf("%s",str);
	system("pause");
	return 0;
}