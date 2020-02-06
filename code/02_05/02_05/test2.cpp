#include<iostream>
#include<vector>
using namespace std;

int longestIncreasingPath(vector<vector<int>>& matrix)
{
	if (matrix.empty() || matrix[0].empty())
	{
		return 0;
	}

	int m = matrix.size();
	int n = matrix[0].size();
	vector<vector<int> > ret(m, vector<int>(n, 1));

	for (int i = 1; i < m; i++)
	{
		for (int j = 1; j < n; j++)
		{
			if (i == 1 && j == 1)
			{
				ret[i][j] = 1;
			}
			else   
			{
				ret[i][j] = ret[i - 1][j] + ret[i][j - 1];
			}
		}
	}
	return ret[m-1][n-1];
}

int main()
{
	vector<vector<int>> nums ={ { 9, 9, 4 }, { 6, 6, 8 },{ 2, 1, 1 } };

	cout << longestIncreasingPath(nums) << endl;
	system("pause");
	return 0;
}