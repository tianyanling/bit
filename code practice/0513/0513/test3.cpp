//≈Û”—»¶
#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int>>&M, vector<int>&tmp, int i)
{
	for (int j = 0; j < M.size(); j++)
	{
		if (M[i][j] == 1 && tmp[j] == 0)
		{
			tmp[j] = 1;
			dfs(M, tmp, j);
		}
	}
}

int findCircleNum(vector<vector<int>>& M)
{
	vector<int> tmp(M.size());
	int count = 0;
	for (int i = 0; i < M.size(); i++)
	{
		if (tmp[i] == 0)
		{
			dfs(M, tmp, i);
			count++;
		}
	}
	return count;
}


int main3()
{
	vector<vector<int>> M{ {1,1,0},{1,1,0},{0,0,1} };

	cout << findCircleNum(M) << endl;
	system("pause");
	return 0;
}