//��д����ģ��������������ĳ����� 
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i = 0;
	char password[20] = {0};

	for (i = 0; i < 3; i++)
	{
		printf("��������λ���룺\n");
		scanf("%s", password);        //scanf����%s����Ҫȡ��ַ��
		if (strcmp(password, "123456") == 0)
		{
			printf("������ȷ��\n");
			break;
		}
		else
		{
			printf("����������������룡\n");
		}
	}
	if ( 3== i)
	{
		printf("�������붼���˳�����\n");
	}
	system("pause");
	return 0;
}