//4.理解指向函数指针数组的指针和定义

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void test(const char* str)
{
	printf("%s ", str);
}
int main4()
{
	//函数指针pfun
	void(*pfun)(const char*) = test;
	//函数指针的数组pfunArr
	void(*pfunArr[5])(const char* str);
	pfunArr[0] = test;
	//指向函数指针数组pfunArr的指针ppfunArr
	void(*(*ppfunArr)[10])(const char*) = &pfunArr;
	system("pause");	
	return 0;
}
