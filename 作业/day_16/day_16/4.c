//4.���ָ����ָ�������ָ��Ͷ���

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void test(const char* str)
{
	printf("%s ", str);
}
int main4()
{
	//����ָ��pfun
	void(*pfun)(const char*) = test;
	//����ָ�������pfunArr
	void(*pfunArr[5])(const char* str);
	pfunArr[0] = test;
	//ָ����ָ������pfunArr��ָ��ppfunArr
	void(*(*ppfunArr)[10])(const char*) = &pfunArr;
	system("pause");	
	return 0;
}
