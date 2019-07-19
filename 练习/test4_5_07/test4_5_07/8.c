//给出一百分制成绩。要求输出成绩等级'A','B','C','D','E'.90分以上为'A',80~89为'B'，70~79为'C'，60~69为'D'，60分以下为'E'

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main1()
{
	int score;
	printf("请输入学生成绩：\n");
	scanf("%d",&score);
	if (score > 100 || score < 0)
	{
		printf("输入错误，请重新输入！\n");
	}
	switch (score/10)
	{
	case 10:
	case 9:
		printf("成绩等级为A\n");
		break;
	case 8:
		printf("成绩等级为B\n");
		break;
	case 7:
		printf("成绩等级为C\n");
		break;
	case 6:
		printf("成绩等级为D\n");
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		printf("成绩等级为E\n");
		break;
	default:
		break;
	}
	system("pause");
	return 0;
}