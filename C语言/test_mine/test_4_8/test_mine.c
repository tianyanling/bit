#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_ROW 9
#define MAX_COL 9
#define MINE_COUNT 10

void InitMap(char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL])
//初始化
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
//打印地图
{
	for (int row = 1; row <= MAX_ROW; row++)
	{
		for (int col = 1; col <= MAX_ROW; col++)
			printf("%c", show_map[row][col]);
	}
	printf("\n");
}

void Input(int row, int col, char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL])
//用户输入坐标
{
	int blank_count = 0;
	while (1)
	{ 
		system("cls");
		PrintMap(show_map);
		printf("请输入一组坐标(row col):");
		scanf("%d%d", &row, &col);
		if (row <1 || row >MAX_ROW || col <1 || col >MAX_COL)
		{
			printf("您输入的坐标有误，请重新输入！\n");
		}
		if (show_map[row][col] != '*')
		{
			printf("该位置已经被翻开，请重新输入！");
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
				printf("恭喜你，游戏胜利！");
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
	printf("------------   游戏菜单    ------------\n");
	printf("-----------  1.开始游戏    ------------\n");
	printf("------------ 2.结束游戏    ------------\n");
	printf("---------------------------------------\n");
	printf("-----------请输入您的选择->  ----------\n");
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
			printf("游戏结束\n");
		}
		else
		{
			printf("您的输入有误，请重新输入！\n");
		}
	}
	system("pause");
	return 0;
}
