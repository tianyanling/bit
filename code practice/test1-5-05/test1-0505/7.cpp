//��Բ�뾶��r=1.5,Բ����h=3,��Բ�ܳ���Բ�����Բ��������Բ�������Բ�����

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float r, h;
	float pi = 3.1415026;
	float c, s1, s2, v1, v2;		//c��ʾԲ�ܳ���s1��ʾԲ�����s2��ʾԲ��������v1��ʾԲ�������v2��ʾԲ�����
	printf("������Բ�뾶r��Բ����h\n");
	scanf("%f%f", &r, &h);
	c = 2 * pi*r;
	s1 = pi*r*r;
	s2 = 4 * pi*r*r;
	v1 = (4.0 * pi*pow(r, 3)) / 3.0;
	v2 = s1*h;
	printf("Բ�ܳ�:c =%6.2f\n",c);
	printf("Բ���:s1 = %6.2f\n", s1);
	printf("Բ������:s2 = %6.2f\n", s2);
	printf("Բ�����:v1 = %6.2f\n",v1);
	printf("Բ�����:v2 = %6.2f\n", v2);
	system("pause");
	return 0;
}