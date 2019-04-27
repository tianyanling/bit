#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_ROW 9
#define MAX_COL 9
#define MINE_COUNT 10

void InitMap(char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL])
//��ʼ��
{
	for (int row = 1; row <= MAX_ROW; row++)
	{
		for (int col = 1; col <= MAX_COL; col++)
		{
			show_map[row][col] = '*';
		}
	}
	for (int row = 1; row <= MAX_ROW; row++)
	{
		for (int col = 1; col <= MAX_COL; col++)
		{
			mine_map[row][col] = '0';
		}
	}

	int mine_count = MINE_COUNT;

	while (mine_count > 0)
	{
		int row = rand() % (MINE_COUNT);
		int col = rand() % (MINE_COUNT);
		if (mine_map[row][col] = '1')
		{
			continue;
		}
		mine_map[row][col] = '1';
		mine_count--;
	}
}
void PrintMap(char show_map[MAX_ROW][MAX_COL])
//��ӡ��ͼ
{
	for (int row = 1; row <= MAX_ROW; row++)
	{
		for (int col = 1; col <= MAX_ROW; col++)
			printf("%c", show_map[row][col]);
	}
	printf("\n");
}

void Input(int row, int col, char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL])
//�û���������
{
	int blank_count = 0;
	while (1)
	{ 
		system("cls");
		PrintMap(show_map);
		printf("������һ������(row col):");
		scanf("%d%d", &row, &col);
		if (row <1 || row >MAX_ROW || col <1 || col >MAX_COL)
		{
			printf("������������������������룡\n");
		}
		if (show_map[row][col] != '*')
		{
			printf("��λ���Ѿ������������������룡");
		}
		if (mine_map[row][col] == '1')
		{
			system("pause");
			printf("mine_map");
			printf("GAME OVER!");
			break;
		}
		if (mine_map[row][col] == '0')
		{
			if (blank_count == MAX_ROW * MAX_COL - MINE_COUNT)
			{
				printf("��ϲ�㣬��Ϸʤ����");
				break;
			}
		}
	}
}

void Updata(char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL],int row,int col)
{
	int count = 0;
	if (row - 1 >= 0 && col - 1 >= 0 && mine_map[row - 1][col - 1] == '1')
	{
		count++;
	}
	if (row - 1 >= 0 && col >= 0 && mine_map[row - 1][col] == '1')
	{
		count++;
	}
	if (row - 1 >= 0 && col + 1 <=MAX_COL && mine_map[row - 1][col +1] == '1')
	{
		count++;
	}
	if (row >= 0 && col - 1>= 0 && mine_map[row][col - 1] == '1')
	{
		count++;
	}
	if (row >= 0 && col >= 0 && mine_map[row][col] == '1')
	{
		count++;
	}
	if (row>= 0 && col + 1 <=MAX_COL && mine_map[row][col + 1] == '1')
	{
		count++;
	}
	if (row + 1 <= MAX_ROW && col - 1 >= 0 && mine_map[row + 1][col - 1] == '1')
	{
		count++;
	}
	if (row + 1 <= MAX_ROW && col >= 0 && mine_map[row + 1][col] == '1')
	{
		count++;
	}
	if (row + 1 <= MAX_ROW && col + 1 <= MAX_COL && mine_map[row + 1][col + 1] == '1')
	{
		count++;
	}
	show_map[row][col] = count + '0';
}

void Game()
{
	int row = 0;
	int col = 0;
	char show_map[MAX_ROW][MAX_COL];
	char mine_map[MAX_ROW][MAX_COL];
	InitMap(show_map, mine_map);
	PrintMap(show_map);
	Input(row,col,show_map,mine_map);
}

int Menu()
{
	int input;
	printf("---------------------------------------\n");
	printf("------------   ��Ϸ�˵�    ------------\n");
	printf("-----------  1.��ʼ��Ϸ    ------------\n");
	printf("------------ 2.������Ϸ    ------------\n");
	printf("---------------------------------------\n");
	printf("-----------����������ѡ��->  ----------\n");
	scanf("%d", &input);
	*
}

int main()
{
	srand((unsigned)time(0));
	while (1)
	{
		int choice = Menu();
		if (choice == 1)
		{
			Game();
		}
		if (choice == 0)
		{
			printf("��Ϸ����\n");
		}
		else
		{
			printf("���������������������룡\n");
		}
	}
	system("pause");
	return 0;
}
