#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main1()
{
	int n, m;
	while (cin >> n >> m)
	{
		vector<vector<int>> nums(n, vector<int>(m));
		int sum;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> sum;
				nums[i].push_back(sum);
			}
		}
		int num = 0;
		int max_num = 0;
		vector<int> row;
		int i, j;
		for (i = 0; i < nums.size(); i++)
		{
			for (j = 1; j < nums[0].size()-1; j++)
			{
				if(nums[j] > nums[ j-1])
				{
					num = nums[j][i];
				}
			}
			if (max_num < num)
			{
				max_num = nums[i][j];
				row.push_back(i);
			}
		}
		int count = 0;
		sort(row.begin(), row.end());
		for (int i = 1; i < row.size(); i++)
		{
			if (row[i] != row[i - 1])
			{
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}