#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_ROW 9
#define MAX_COL 9
#define MINE_COUNT 10

void Init(char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL])
//初始化
{
	for (int row = 0; row < MAX_ROW; row++)
	{
		for (int col = 0; col < MAX_COL; col++)
		{
			show_map[row][col] = '*';
			//地图初始化
		}
	}
	for (int row = 0; row < MAX_ROW; row++)
	{
		for (int col = 0; col < MAX_COL; col++)
		{
			mine_map[row][col] = '0';
			//地雷初始化
		}
	}
	srand((unsigned)time(0));
	int mine_count = MINE_COUNT;
	while (mine_count > 0)
	{
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (mine_map[row][col] = '0')
		{
			mine_map[row][col] = '1';
		}
		mine_map[row][col] = '1';
		-- mine_count;
	}
}

void PrintMap(char show_map[MAX_ROW][MAX_COL], int row, int col)
//打印地图
{
	printf("   ");
	for (row = 0; row < MAX_ROW; row++)
	{
		printf("   %d", row);
	}
	printf("\n");
	for (col = 0; col <= MAX_COL; col++)
	{
		printf("---|");
	}
	printf("\n");
	for (row = 0; row < MAX_ROW; row++)
	{
		printf(" %d |", row);
		for (col = 0; col < MAX_COL; col++)
		{
			printf("%c  |", show_map[row][col]);
		}
		printf("\n");
		printf("   |", row + 1);
		for (col = 0; col < MAX_COL; col++)
		{
			printf("---|");
		}
		printf("\n");
	}
}

int Updata(char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL], int row, int col)
{
	int count = 0;
	if (row - 1 >= 0 && col - 1 >= 0 && mine_map[row - 1][col - 1] == '1')
		//左上方
	{
		count++;
	}
	if (row - 1 >= 0 && col >= 0 && mine_map[row - 1][col] == '1')
		//上边
	{
		count++;
	}
	if (row - 1 >= 0 && col + 1 <= MAX_COL && mine_map[row - 1][col + 1] == '1')
		//右上方
	{
		count++;
	}
	if (row >= 0 && col - 1 >= 0 && mine_map[row][col - 1] == '1')
		//左边
	{
		count++;
	}
	if (row >= 0 && col + 1 <= MAX_COL && mine_map[row][col + 1] == '1')
		//右边
	{
		count++;
	}
	if (row + 1 <= MAX_ROW && col - 1 >= 0 && mine_map[row + 1][col - 1] == '1')
		//左下方
	{
		count++;
	}
	if (row + 1 <= MAX_ROW && col >= 0 && mine_map[row + 1][col] == '1')
		//下方
	{
		count++;
	}
	if (row + 1 <= MAX_ROW && col + 1 <= MAX_COL && mine_map[row + 1][col + 1] == '1')
		//右下方
	{
		count++;
	}
	return count + '0';
}

//void open_mine(char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL],int row, int col)
//{
//	if (mine_map[row - 1][col - 1] == '0')
//	{
//		show_map[row - 1][col - 1] = count_mine(row - 1, col - 1) + '0';
//	}
//
//}

int Input(char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL])
//用户输入坐标
{
	int row = 0;
	int col = 0;
	int blank_count = 0;
	while (1)
	{
		printf("\n");
		printf("请输入一组坐标(row col):");
		scanf("%d%d", &row, &col);
		system("cls");
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL)
		{
			printf("您输入的坐标有误，请重新输入！\n");
			continue;
		}
		if (show_map[row][col] != '*')
			//判断所选位置是否被翻开
		{
			printf("该位置已经被翻开，请重新输入！");
			continue;
		}
		
		if (mine_map[row][col] == '1')
				//判断是否踩雷，游戏结束
		{
			printf("您已踩雷，游戏结束\n");
			PrintMap(mine_map, row, col);
			break;
		}
		
			int ret = Updata(show_map, mine_map, row, col);
			show_map[row][col] = ret;
			PrintMap(show_map, row, col);
			blank_count++;
			if (mine_map[row][col] == '0')
				//判断游戏是否胜利
			{
				if (blank_count == MAX_ROW * MAX_COL - MINE_COUNT)
				{
					printf("恭喜你，游戏胜利！\n");
					PrintMap(mine_map, row, col);
					break;
				}
			}
	}
}


void Game()
{
	int row = 0;
	int col = 0;
	char show_map[MAX_ROW][MAX_COL];
	char mine_map[MAX_ROW][MAX_COL];
	Init(show_map, mine_map);
	PrintMap(show_map, row, col);
	Input(show_map, mine_map);
	Updata(show_map, mine_map, row, col);
}


int Menu()
{
	printf("---------------------------------------\n");
	printf("--------   欢迎来到扫雷游戏    --------\n");
	printf("------------ 1.开始游戏    ------------\n");
	printf("------------ 0.结束游戏    ------------\n");
	printf("---------------------------------------\n");
	printf("请输入您的选择-> \n");
	int choice = 0;
	scanf("%d", &choice);
	printf("\n");
	return choice;
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
			break;
		}
		else if (choice == 0)
		{
			printf("游戏结束\n");
			break;
		}
		else
		{
			printf("您的输入有误，请重新输入！\n");
		}
	}
	system("pause");
	return 0;
}