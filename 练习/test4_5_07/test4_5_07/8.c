//����һ�ٷ��Ƴɼ���Ҫ������ɼ��ȼ�'A','B','C','D','E'.90������Ϊ'A',80~89Ϊ'B'��70~79Ϊ'C'��60~69Ϊ'D'��60������Ϊ'E'

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main1()
{
	int score;
	printf("������ѧ���ɼ���\n");
	scanf("%d",&score);
	if (score > 100 || score < 0)
	{
		printf("����������������룡\n");
	}
	switch (score/10)
	{
	case 10:
	case 9:
		printf("�ɼ��ȼ�ΪA\n");
		break;
	case 8:
		printf("�ɼ��ȼ�ΪB\n");
		break;
	case 7:
		printf("�ɼ��ȼ�ΪC\n");
		break;
	case 6:
		printf("�ɼ��ȼ�ΪD\n");
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		printf("�ɼ��ȼ�ΪE\n");
		break;
	default:
		break;
	}
	system("pause");
	return 0;
}