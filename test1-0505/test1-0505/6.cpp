//请编程序将“China”译成密码，密码规律是：用原来的字母后面第个字母代替原来的字母。例：将China译成Glmre

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c1 = 'C', c2 = 'h', c3 = 'i', c4 = 'n', c5 = 'a';
	c1 = c1 + 4;
	c2 = c2 + 4;
	c3 = c3 + 4;
	c4 = c4 + 4;
	c5 = c5 + 4;
	printf("密码是：%c%c%c%c%c\n", c1, c2, c3, c4, c5);
	system("pause");
	return 0;
}