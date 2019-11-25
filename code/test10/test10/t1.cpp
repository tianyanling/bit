//井字棋
//对于一个给定的井字棋棋盘，请设计一个高效算法判断当前玩家是否获胜。
//给定一个二维数组board，代表当前棋盘，其中元素为1的代表是当前玩家的棋子，
//为0表示没有棋子，为 - 1代表是对方玩家的棋子。

//题解1
#include<iostream>
#include<vector>
using namespace std;

bool checkWon1(vector<vector<int> > board)
{
	int sum = 0;
	for (int i = 0; i < board.size(); i++)
	{
		for (int j = 0; j < board[0].size(); j++)
		{
			sum += board[i][j];
		}
	}

	if (sum > 0)
	{
		return true;
	}
	return false;
}

int main1()
{
	vector<vector<int>> v{ {1,0,1},{1,-1,-1},{1,-1,0} };

	cout << checkWon1(v) << endl;
	system("pause");
	return 0;
}