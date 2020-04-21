#include  <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<char>>& grid, int i, int j)
{
	int row = grid.size();//行
	int col = grid[0].size();//列

	grid[i][j] = '0';
	if (i - 1 >= 0 && grid[i - 1][j] == '1')
		dfs(grid, i - 1, j);
	if (i + 1 < row && grid[i + 1][j] == '1')
		dfs(grid, i + 1, j);
	if (j - 1 >= 0 && grid[i][j - 1] == '1')
		dfs(grid, i, j - 1);
	if (j + 1 < col && grid[i][j + 1] == '1')
		dfs(grid, i, j + 1);
}

int numIslands(vector<vector<char>>& grid)
{
	int row = grid.size();//行
	if (row == 0)
		return 0;
	int col = grid[0].size();//列

	int island = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (grid[i][j] == '1')
			{
				island++;
				dfs(grid, i, j);
			}
		}
	}
	return island;
}

int main2()
{
	vector<vector<char>> grid = { { '1','1','0','0'}, {'1','1','0','0'}, {'1','0','0','1'}};
	cout << numIslands(grid) << endl;
	std::system("pause");
	return 0;
}