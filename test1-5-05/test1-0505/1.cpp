//�����ҹ�����������ֵ����������Ϊ9%������10����ҹ�����������ֵ����������������ٰٷֱȡ�
//���㹫ʽΪp=(1+r)^n,  rΪ�������ʣ�nΪ������pΪ��������ȵı�����

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	double p,n,r;
	n = 10;
	r = 0.09;
	p =pow(1+r,n);		//pow(x,y)  xΪ������yΪ���ݣ�x,y��Ϊdouble����
	printf("p=%f\n", p);
	system("pause");
	return 0;
}