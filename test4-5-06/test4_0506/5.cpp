//�Ӽ�������һ����С��1000��������Ҫ���������ƽ������������������������������֣���
//Ҫ�����������ݺ��ȶ�����м���Ƿ�ΪС��1000����������������Ҫ���������롣

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float n;
	int x;
	printf("������һ��С��1000��������\n");
	scanf("%f",&n);
	if (n < 0 || n>1000)
	{ 
		printf("���������룡\n");
	}
	x =  sqrt(n);
	printf("%d\n",x);
	system("pause");
	return 0;
}