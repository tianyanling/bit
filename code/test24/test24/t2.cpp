//迷宫问题
#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> maze;
vector<vector<int>> now_path;
vector<vector<int>> best_path;
int M, N;

void Maze(int m, int n)
{
	maze[m][n] = 1;//表示当前节点已走，不可再走
	now_path.push_back({ m, n });//将当前节点加入到路径中

	if (m == M - 1 && n == N - 1) //判断是否到达终点
	{
		if (best_path.empty() || now_path.size() < best_path.size())
		{
			best_path = now_path;
		}
	}

	if (m - 1 >= 0 && maze[m - 1][n] == 0)//探索向上走是否可行
	{
		Maze(m - 1, n);
	}
	if (m + 1 < M && maze[m + 1][n] == 0)//探索向下走是否可行
	{
		Maze(m + 1, n);
	}
	if (n - 1 >= 0 && maze[m][n - 1] == 0)//探索向左走是否可行
	{
		Maze(m, n - 1);
	}
	if (n + 1 < N && maze[m][n + 1] == 0)//探索向右走是否可行
	{
		Maze(m, n + 1);
	}
	maze[m][n] = 0;         //恢复现场，设为未走
	now_path.pop_back();
}

int main()
{
	while (cin >> M >> N)
	{
		now_path.clear();
		best_path.clear();

		maze = vector<vector<int>> (M, vector<int>(N,0));

		for (auto &i : maze)
		{
			for (auto &j : i) 
			{
				cin >> j;
			}
		}

		Maze(0, 0);
		for (auto i : best_path)
		{
			cout << "(" << i[0] << "," << i[1] << ")" << endl;
		}
	}
	system("pause");
	return 0;
}
