//岛屿的最大面积
#include <iostream>
#include <vector>
using namespace std;

int dfs(vector<vector<int>>& grid, int i, int j)
{
	int row = grid.size();
	int col = grid[0].size();

	if (i > 0 && j > 0 && i < row && j < col)
	{
		grid[i][j] = 0;
		return (1 + dfs(grid, i - 1, j) + dfs(grid, i + 1, j) + dfs(grid, i, j - 1) + dfs(grid, i, j + 1));
	}
	return 0;
}

int maxAreaOfIsland(vector<vector<int>>& grid)
{
	int max_count = 0;
	int count = 0;
	for (int i = 1; i < grid.size()-1; i++)
	{
		for (int j = 1; j < grid[0].size()-1; j++)
		{
			if (grid[i][j] == 1)
			{
				count = dfs(grid, i, j);
			}
			max_count = (max_count>count) ? max_count : count;
		}
	}
	return max_count;
}

int main2()
{
	vector<vector<int>> grid{ {1,1,0,0,0},{1,1,0,0,0},{0,0,0,1,1},{0,0,0,1,1} };
	cout << maxAreaOfIsland(grid) << endl;
	std::system("pause");
	return 0;
}