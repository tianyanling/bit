//请编写一个函数（允许增加子函数），计算n x m的棋盘格子（n为横向的格子数，m为竖向的格子数）沿着各自边缘线从左上角走到右下角，总共有多少种走法，
//要求不能走回头路，即：只能往右和往下走，不能往左和往上走。
//思路：动态规划问题
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		vector<vector<int>> v(n + 1, vector<int>(m + 1, 0));

		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j <= m; j++)
			{
				if (i == 0 && j == 0)//第一个格子
				{
					v[i][j] = 1;
					continue;
				}

				if (i == 0)//上边界
				{
					v[i][j] = v[i][j - 1];
				}
				else if (j == 0)//左边界
				{
					v[i][j] = v[i - 1][j];
				}
				else//其他格子
				{
					v[i][j] = v[i - 1][j] + v[i][j - 1];
				}
			}
		}
		cout << v[n][m] << endl;
	}

	system("pause");
	return 0;
}