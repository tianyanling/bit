//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//#define MAX_ROW 9
//#define MAX_COL 9
//#define MINE_COUNT 10
//
//void InitMap(char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL])
//{
//	for (int row = 1; row <= MAX_ROW; row++)
//	{
//		for (int col = 1; col <= MAX_COL; col++)
//		{
//			show_map[row][col] = '*';
//		}
//	}
//	for (int row = 1; row <= MAX_ROW; row++)
//	{
//		for (int col = 1; col <= MAX_COL; col++)
//		{
//			mine_map[row][col] = '0';
//		}
//	}
//
//	int mine_count = MINE_COUNT;
//	srand((unsigned)time(0));
//	while (mine_count > 0)
//	{
//		int row = rand() % (MINE_COUNT);
//		int col = rand() % (MINE_COUNT);
//		if (mine_map[row][col] = '0')
//		{
//			continue;
//		}
//		if (mine_map[row][col] = '1')
//		{
//			mine_count--;
//		}
//	}
//}
//	void PrintMap(char show_map[MAX_ROW][MAX_COL])
//	{
//		for (int row = 1; row <= MAX_ROW; row++)
//		{
//			for (int col = 1; col <= MAX_ROW; col++)
//				printf("%c", show_map[row][col]);
//		}
//		printf("\n");
//	}
//
//	void Game()
//	{
//		char show_map[MAX_ROW][MAX_COL];
//		char mine_map[MAX_ROW][MAX_COL];
//		InitMap(show_map, mine_map);
//		PrintMap(show_map);
//	}
//
//	int Menu()
//	{
//		int input;
//		printf("---------------------------------------\n");
//		printf("------------   ��Ϸ�˵�    ------------\n");
//		printf("-----------  1.��ʼ��Ϸ    ------------\n");
//		printf("------------ 2.������Ϸ    ------------\n");
//		printf("---------------------------------------\n");
//		printf("-----------����������ѡ��->  ----------\n");
//		scanf("%d", &input);
//		return input;
//	}
//
//	int main()
//	{
//		srand((unsigned)time(0));
//		while (1)
//		{
//			int choice = Menu();
//			if (choice == 1)
//			{
//				Game();
//			}
//			if (choice == 0)
//			{
//				printf("��Ϸ����\n");
//			}
//			else
//			{
//				printf("���������������������룡\n");
//			}
//		}
//		system("pause");
//		return 0;
//	}
