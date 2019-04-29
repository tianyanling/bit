#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_ROW 3
#define MAX_COL 3

void Init(char board[MAX_ROW][MAX_COL])
{
	for (int row = 0; row < MAX_ROW; row++)
	{
		for (int col = 0; col < MAX_COL; col++)
		{
			board[row][col] = ' ';
		}
	}
}


void Print(char board[MAX_ROW][MAX_COL])
{
	int row = 0;
	int col = 0;
	printf(" ");
	for (row = 0; row < MAX_ROW; row++)
	{
		printf("   %d",row);
	}
	printf("\n");
	for (col = 0; col <= MAX_COL; col++)
	{
		printf("---|");
	}
	printf("\n");
	for (row = 0; row < MAX_ROW; row++)
	{
		printf("%d  |",row);
		for (col = 0; col < MAX_COL; col++)
		{
			printf("%c  |",board[row][col]);
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

void player_move(char board[MAX_ROW][MAX_COL],int row,int col)
{
	printf("�����->\n");
	while (1)
	{
		printf("�����������λ��[row][col]:");
		scanf("%d%d",&row,&col);
		system("cls");
		if (row >= 0 && row < MAX_ROW && col >= 0 && col < MAX_COL)
		{
			if (board[row][col] != ' ')
			{
				printf("��λ���Ѿ����壬���������룡\n");
				continue;
			}
			else
			{
				board[row][col] = 'O';
				Print(board);
				break;
			}
		}
		else
		{
			printf("�������겻�Ϸ������������룡\n");
			continue;
		}
	}
}

void computer_move(char board[MAX_ROW][MAX_COL], int row, int col)
{
	printf("������->\n");
	srand((unsigned)time(0));
	while (1)
	{
		row = rand() % MAX_ROW;
		col = rand() % MAX_COL ;
		if (board[row][col] == ' ')
		{
			board[row][col] = 'X';
			Print(board);
			break;
		}
	}
}

int check_full(char board[MAX_ROW][MAX_COL], int row, int col)
{
	for (row = 0; row < MAX_ROW; row++)
	{
		for (col = 0; col < MAX_COL; col++)
		{
			if (board[row][col] == ' ');			//���̻��п�λ��
			{
				return 0;
			}
		}
		return 1;
	}
}

int check_win(char board[MAX_ROW][MAX_COL], int row, int col)
{
	int count = 0;
		for (row = 0; row < MAX_ROW; row++)
			//�жϺ���
		{
			if ((board[row][0] == board[row][1]) && (board[row][1] == board[row][2]))
			{
				return board[row][0];
			}
		}
		for (col = 0; col < MAX_COL; col++)
			//�ж�����
		{
			if ((board[0][col] == board[1][col]) && (board[1][col] == board[2][col]))
			{
				return board[0][col];
			}
		}
		//�ж϶Խ���
		if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2]))
		{
			return board[1][1];
		}
		if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2]))
		{
			return board[1][1];
		}
		for (row = 0; row < MAX_ROW; row++)
		{
			for (col = 0; col < MAX_COL; col++)
			{
				if (board[row][col] == 'O' || board[row][col] == 'X')
				{
					count++;
					if (count == MAX_ROW*MAX_COL)
						return 'q';
				}
			}
		}
		return ' '; 
}

void Game()
{
	int row = 0;
	int col = 0;
	char board[MAX_ROW][MAX_COL];
	Init(board);
	Print(board);
	char winner = ' ';
	while (1)
	{
		player_move(board, row, col);
		winner = check_win(board, row, col);
		if (winner != ' ')
		{
			break;
		}
		computer_move(board, row, col);
		winner = check_win(board, row, col);
		if (winner != ' ')
		{
			break;
		}
	}
		if (winner == 'O')
		{
			printf("���ʤ����\n");
		}
		if (winner == 'X')
		{
			printf("����ʤ����\n");
		}
		if (winner == 'q')
		{
			printf("ƽ�֣�\n");
		}
}

int Menu()
{
	printf("*****************************************\n");
	printf("**********��ӭ������������Ϸ************\n");
	printf("**************1.��ʼ��Ϸ*****************\n");
	printf("**************0.�˳���Ϸ*****************\n");
	printf("*****************************************\n");
	int choice = 0;
	printf("���������ѡ��->\n");
	scanf("%d",&choice);
	return choice;
}

int main()
{
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
			printf("�ɹ��˳���Ϸ!\n");
			break;
		}
		else
		{
			printf("����ָ��������������룡\n");
			continue;
		}
	}
	system("pause");
	return 0;
}
