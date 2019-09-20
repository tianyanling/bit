//1.完成猜数字游戏。 

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("******************************************\n");
	printf("**********     猜数字游戏       **********\n");
	printf("******************************************\n");
	printf("############     1.play      #############\n");
	printf("############     0.exit      #############\n");
	printf("******************************************\n");
}

void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;              //随机数
	while (1)     //while (!scanf("%d",&n)
	{
		printf("请输入你要猜的数字(1-100):\n");
		scanf("%d",&guess);
		if (guess > ret)
		{
			printf("猜大了，请重新输入\n");
		}
		else if (guess < ret)
		{
			printf("猜小了，请重新输入\n");
		}
		else
		{
			printf("恭喜你，猜对啦！\n");
			break;
		}
	}
}

int main1()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d", &input);
			switch (input)
		{
			case 1:
				game();
				break;
				
			case 0:
				printf("确定退出游戏吗？\n");
				printf("1:继续游戏  0:退出游戏\n请选择：\n");
				scanf("%d",&input);
				if (1 == input)
				{
					printf("继续游戏！\n");
				}
				if (0 == input)
				{
					printf("退出成功！\n");
				}
				break;
			default:
				printf("输入错误，请重新输入！");
				break;
		}
	} while (input);

	system("pause");
	return 0;
}

/*
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
printf("******************************************\n");
printf("**********     猜数字游戏       **********\n");
printf("******************************************\n");
printf("############     1.play      #############\n");
printf("############     0.exit      #############\n");
printf("******************************************\n");
}

void game()
{
int ret = 0;
int guess = 0;
ret = rand() % 100 + 1;              //随机数
while (!scanf("%d",&n)
{
getchar();
if (guess > ret)
{
printf("猜大了，请重新输入\n");
}
else if (guess < ret)
{
printf("猜小了，请重新输入\n");
}
else
{
printf("恭喜你，猜对啦！\n");
break;
}
}
}

int main1()
{
int input = 0;
srand((unsigned int)time(NULL));

do
{
menu();
printf("请选择：\n");
scanf("%d", &input);
switch (input)
{
case 1:
game();
break;

case 0:
printf("确定退出游戏吗？\n");
printf("1:继续游戏  0:退出游戏\n请选择：\n");
scanf("%d",&input);
if (1 == input)
{
printf("继续游戏！\n");
}
if (0 == input)
{
printf("退出成功！\n");
}
break;
default:
printf("输入错误，请重新输入！");
break;
}
} while (input);

system("pause");
return 0;
}
*/
