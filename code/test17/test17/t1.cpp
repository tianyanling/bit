//杨辉三角的变形（题目见牛客网）
#include<iostream>
#include<vector>
using namespace std;

int doubleNumPos(int n)
{
	int i = 0, j = 0;
	vector<vector<int>> v(n, vector<int>(2 * n - 1, 0));

	if (n < 2)
	{
		return -1;
	}
	v[0][n - 1] = v[n - 1][0] = v[n - 1][2 * n - 2] = 1;

	for (i = 1; i < n; i++)
	{
		for (j = 1; j < 2 * n - 2; j++)
		{
			v[i][j] = v[i - 1][j - 1] + v[i - 1][j] + v[i - 1][j + 1];
		}
	}

	for (i = 0; i < 2 * n; i++)
	{
		if (v[n - 1][i] != 0 && (v[n - 1][i] % 2 == 0))
		{
			cout << i + 1 << endl;
			break;
		}
	}
	return -1;
}

int main1()
{
	int n;
	while (cin >> n)
	{
		doubleNumPos(n);
	}
	system("pause");
	return 0;
}