//1.��ɲ�������Ϸ�� 

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("******************************************\n");
	printf("**********     ��������Ϸ       **********\n");
	printf("******************************************\n");
	printf("############     1.play      #############\n");
	printf("############     0.exit      #############\n");
	printf("******************************************\n");
}

void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;              //�����
	while (1)     //while (!scanf("%d",&n)
	{
		printf("��������Ҫ�µ�����(1-100):\n");
		scanf("%d",&guess);
		if (guess > ret)
		{
			printf("�´��ˣ�����������\n");
		}
		else if (guess < ret)
		{
			printf("��С�ˣ�����������\n");
		}
		else
		{
			printf("��ϲ�㣬�¶�����\n");
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
		printf("��ѡ��\n");
		scanf("%d", &input);
			switch (input)
		{
			case 1:
				game();
				break;
				
			case 0:
				printf("ȷ���˳���Ϸ��\n");
				printf("1:������Ϸ  0:�˳���Ϸ\n��ѡ��\n");
				scanf("%d",&input);
				if (1 == input)
				{
					printf("������Ϸ��\n");
				}
				if (0 == input)
				{
					printf("�˳��ɹ���\n");
				}
				break;
			default:
				printf("����������������룡");
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
printf("**********     ��������Ϸ       **********\n");
printf("******************************************\n");
printf("############     1.play      #############\n");
printf("############     0.exit      #############\n");
printf("******************************************\n");
}

void game()
{
int ret = 0;
int guess = 0;
ret = rand() % 100 + 1;              //�����
while (!scanf("%d",&n)
{
getchar();
if (guess > ret)
{
printf("�´��ˣ�����������\n");
}
else if (guess < ret)
{
printf("��С�ˣ�����������\n");
}
else
{
printf("��ϲ�㣬�¶�����\n");
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
printf("��ѡ��\n");
scanf("%d", &input);
switch (input)
{
case 1:
game();
break;

case 0:
printf("ȷ���˳���Ϸ��\n");
printf("1:������Ϸ  0:�˳���Ϸ\n��ѡ��\n");
scanf("%d",&input);
if (1 == input)
{
printf("������Ϸ��\n");
}
if (0 == input)
{
printf("�˳��ɹ���\n");
}
break;
default:
printf("����������������룡");
break;
}
} while (input);

system("pause");
return 0;
}
*/
