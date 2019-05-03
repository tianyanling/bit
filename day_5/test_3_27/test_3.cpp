//编写代码模拟三次密码输入的场景。 
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。

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
		printf("请输入六位密码：\n");
		scanf("%s", password);        //scanf输入%s不需要取地址符
		if (strcmp(password, "123456") == 0)
		{
			printf("密码正确！\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入！\n");
		}
	}
	if ( 3== i)
	{
		printf("三次密码都错，退出程序！\n");
	}
	system("pause");
	return 0;
}