#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main2()
{
#if 0
	int s = 0, n;
	for (n = 0; n < 4; n++)
	{
		switch (n)
		{
		default: s += 4;
		case 1: s += 1;
		case 2: s += 2;
		case 3: s += 3;
		}
	}
	printf("%d\n", s);
#endif

#if 0
	char *pcColor = "bule1";
	char acColor[] = "blue1";
	printf("%d\n", strlen(pcColor));//���ַ����ĳ��ȣ�������\0��
	printf("%d\n", strlen(acColor));
	printf("%d\n", sizeof(pcColor));//���ֽڳ��ȣ��ַ�����*һ���ַ��ֽ�����
	printf("%d\n", sizeof(acColor));
#endif

#if 1
	unsigned long ulA = 0x11000000;
	printf("%x\n", *(unsigned char *)&ulA);
#endif
	system("pause");
	return 0;
}