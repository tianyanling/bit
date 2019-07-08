//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//#define MAX_ROW 2
//#define MAX_COL 2
//#define MINE_COUNT 1
//
//void Init(char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL])
////初始化
//{
//	for (int row = 1; row <= MAX_ROW; row++)
//	{
//		for (int col = 1; col <= MAX_COL; col++)
//		{
//			show_map[row][col] = '*';
//			//地图初始化
//		}
//	}
//	for (int row = 1; row <= MAX_ROW; row++)
//	{
//		for (int col = 1; col <= MAX_COL; col++)
//		{
//			mine_map[row][col] = '0';
//			//地雷初始化
//		}
//	}
//	srand((unsigned)time(0));
//	int mine_count = MINE_COUNT;
//	while (mine_count > 0)
//	{
//		int row = rand() % MAX_ROW;
//		int col = rand() % MAX_COL;
//		if (mine_map[row][col] = '0')
//		{
//			mine_map[row][col] = '1';
//		}
//		mine_map[row][col] = '1';
//		--mine_count;
//	}
//}
//
//void PrintMap(char show_map[MAX_ROW][MAX_COL], int row, int col)
////打印地图
//{
//	printf("  | ");
//	for (col = 1; col <= MAX_COL; col++)
//	{
//		printf("%d  ", col);
//	}
//	printf("\n");
//	printf("-- -- -- -- -- -- -- -- -- --");
//	for (int row = 1; row <= MAX_ROW; row++)
//	{
//		printf("\n");
//		printf("%d | \n", row);
//	}
//	for (int row = 1; row <= MAX_ROW; row++)
//	{
//		for (int col = 1; col <= MAX_ROW; col++)
//		{
//			printf("  ", show_map[row][col]);
//		}
//	}
//	printf("\n");
//}
//
//void Input(char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL], int row, int col)
////用户输入坐标
//{
//	int blank_count = 0;
//	while (1)
//	{
//		printf("\n");
//		printf("请输入一组坐标(row col):");
//		scanf("%d%d", &row, &col);
//		if (row <1 || row > MAX_ROW || col <1 || col > MAX_COL)
//			//判断输入坐标是否有效
//		{
//			printf("您输入的坐标有误，请重新输入！\n");
//			continue;
//		}
//		if (show_map[row][col] != '*')
//			//判断所选位置是否被翻开
//		{
//			printf("该位置已经被翻开，请重新输入！");
//			continue;
//		}
//		if (mine_map[row][col] == '1')
//			//判断是否踩雷，游戏结束
//		{
//			printf("GAME OVER!\n");
//			break;
//		}
//		blank_count++;
//		if (mine_map[row][col] == '0')
//			//判断游戏是否胜利
//		{
//			if (blank_count == MAX_ROW * MAX_COL - MINE_COUNT)
//			{
//				printf("恭喜你，游戏胜利！\n");
//				break;
//			}
//		}
//	}
//}
//
//void Updata(char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL], int row, int col)
//
//{
//	int count = 0;
//	if (row - 1 > 0 && col - 1 > 0 && mine_map[row - 1][col - 1] == '1')
//	{
//		count++;
//	}
//	if (row - 1 > 0 && col > 0 && mine_map[row - 1][col] == '1')
//	{
//		count++;
//	}
//	if (row - 1 > 0 && col + 1 <= MAX_COL && mine_map[row - 1][col + 1] == '1')
//	{
//		count++;
//	}
//	if (row > 0 && col - 1 > 0 && mine_map[row][col - 1] == '1')
//	{
//		count++;
//	}
//	if (row > 0 && col > 0 && mine_map[row][col] == '1')
//	{
//		count++;
//	}
//	if (row > 0 && col + 1 <= MAX_COL && mine_map[row][col + 1] == '1')
//	{
//		count++;
//	}
//	if (row + 1 <= MAX_ROW && col - 1 > 0 && mine_map[row + 1][col - 1] == '1')
//	{
//		count++;
//	}
//	if (row + 1 <= MAX_ROW && col > 0 && mine_map[row + 1][col] == '1')
//	{
//		count++;
//	}
//	if (row + 1 <= MAX_ROW && col + 1 <= MAX_COL && mine_map[row + 1][col + 1] == '1')
//	{
//		count++;
//	}
//	show_map[row][col] = count + '0';
//}
//
//void Game()
//{
//	int row = 1;
//	int col = 1;
//	char show_map[MAX_ROW][MAX_COL];
//	char mine_map[MAX_ROW][MAX_COL];
//	Init(show_map, mine_map);
//	PrintMap(show_map, row, col);
//	Input(show_map, mine_map, row, col);
//	Updata(show_map, mine_map, row, col);
//}
//
//
//int Menu()
//{
//	printf("---------------------------------------\n");
//	printf("------------   游戏菜单    ------------\n");
//	printf("------------ 1.开始游戏    ------------\n");
//	printf("------------ 0.结束游戏    ------------\n");
//	printf("---------------------------------------\n");
//	printf("请输入您的选择-> \n");
//	int choice = 0;
//	scanf("%d", &choice);
//	printf("\n");
//	return choice;
//}
//
//int main()
//{
//	srand((unsigned)time(0));
//	while (1)
//	{
//		int choice = Menu();
//		if (choice == 1)
//		{
//			Game();
//		}
//		else if (choice == 0)
//		{
//			printf("游戏结束\n");
//			break;
//		}
//		else
//		{
//			printf("您的输入有误，请重新输入！\n");
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//
