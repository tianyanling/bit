//4.��дһ�����򣬿���һֱ���ռ����ַ��� �����Сд�ַ��������Ӧ�Ĵ�д�ַ���������յ��Ǵ�д�ַ�,
//�������Ӧ��Сд�ַ�����������ֲ������
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#define isSmallLetter(ch) ((ch) <='z' && (ch) >= 'a' )			//�궨��

inline int isBigLetter(char ch)			//�������������Ե���һ�δ���ֱ�Ӳ��룬����������
{
	return ch <= 'Z' && ch >= 'A';
}
int main5()
{
	char ch;
	printf("������һ���ַ���\n");
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'a' && ch <= 'z')
		{
			putchar(ch - 32);			//������ASCII�룬�ã�'a' - 'A'��
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