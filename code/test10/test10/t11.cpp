////题解2
#include<iostream>
#include<vector>
using namespace std;

bool checkWon(vector<vector<int> > board)
{
	for (int i = 0; i < board.size(); i++)
	{
		if (board[i][0] + board[i][1] + board[i][2] == 3 ||//行
			board[0][i] + board[1][i] + board[2][i] == 3)//列
		{
			return true;
		}
	}

	int sum = 0;
	for (int i = 0; i < board.size(); i++)//主对角线
	{
		if (board[i][i])
		{
			sum += 1;
		}
	}
	if (sum == board.size())
	{
		return true;
	}

	int tmp = 0;
	for (int i = 0; i < board.size(); i++)//副对角线
	{
		if (board[i][board.size()-i -1])
		{
			tmp += 1;
		}
	}
	if (tmp == board.size())
	{
		return true;
	}
	return false;
}

int main2()
{
	vector<vector<int>> v{ { 1,0,1 },{ 1,-1,-1 },{ 1,-1,0 } };

	cout << checkWon(v) << endl;
	system("pause");
	return 0;
}