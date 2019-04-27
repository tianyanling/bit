#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_ROW 9
#define MAX_COL 9
#define MINE_COUNT 10

void Init(char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL])
//��ʼ��
{
	for (int row = 0; row < MAX_ROW; row++)
	{
		for (int col = 0; col < MAX_COL; col++)
		{
			show_map[row][col] = '*';
			//��ͼ��ʼ��
		}
	}
	for (int row = 0; row < MAX_ROW; row++)
	{
		for (int col = 0; col < MAX_COL; col++)
		{
			mine_map[row][col] = '0';
			//���׳�ʼ��
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
//��ӡ��ͼ
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
		//���Ϸ�
	{
		count++;
	}
	if (row - 1 >= 0 && col >= 0 && mine_map[row - 1][col] == '1')
		//�ϱ�
	{
		count++;
	}
	if (row - 1 >= 0 && col + 1 <= MAX_COL && mine_map[row - 1][col + 1] == '1')
		//���Ϸ�
	{
		count++;
	}
	if (row >= 0 && col - 1 >= 0 && mine_map[row][col - 1] == '1')
		//���
	{
		count++;
	}
	if (row >= 0 && col + 1 <= MAX_COL && mine_map[row][col + 1] == '1')
		//�ұ�
	{
		count++;
	}
	if (row + 1 <= MAX_ROW && col - 1 >= 0 && mine_map[row + 1][col - 1] == '1')
		//���·�
	{
		count++;
	}
	if (row + 1 <= MAX_ROW && col >= 0 && mine_map[row + 1][col] == '1')
		//�·�
	{
		count++;
	}
	if (row + 1 <= MAX_ROW && col + 1 <= MAX_COL && mine_map[row + 1][col + 1] == '1')
		//���·�
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
//�û���������
{
	int row = 0;
	int col = 0;
	int blank_count = 0;
	while (1)
	{
		printf("\n");
		printf("������һ������(row col):");
		scanf("%d%d", &row, &col);
		system("cls");
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL)
		{
			printf("������������������������룡\n");
			continue;
		}
		if (show_map[row][col] != '*')
			//�ж���ѡλ���Ƿ񱻷���
		{
			printf("��λ���Ѿ������������������룡");
			continue;
		}
		
		if (mine_map[row][col] == '1')
				//�ж��Ƿ���ף���Ϸ����
		{
			printf("���Ѳ��ף���Ϸ����\n");
			PrintMap(mine_map, row, col);
			break;
		}
		
			int ret = Updata(show_map, mine_map, row, col);
			show_map[row][col] = ret;
			PrintMap(show_map, row, col);
			blank_count++;
			if (mine_map[row][col] == '0')
				//�ж���Ϸ�Ƿ�ʤ��
			{
				if (blank_count == MAX_ROW * MAX_COL - MINE_COUNT)
				{
					printf("��ϲ�㣬��Ϸʤ����\n");
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
	printf("--------   ��ӭ����ɨ����Ϸ    --------\n");
	printf("------------ 1.��ʼ��Ϸ    ------------\n");
	printf("------------ 0.������Ϸ    ------------\n");
	printf("---------------------------------------\n");
	printf("����������ѡ��-> \n");
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
			printf("��Ϸ����\n");
			break;
		}
		else
		{
			printf("���������������������룡\n");
		}
	}
	system("pause");
	return 0;
}