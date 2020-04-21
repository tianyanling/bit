#include <iostream>
#include <vector>
using namespace std;

void Windows(vector<vector<int>> nums,int m,int n,int a,int b)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = a + i; k < m; k++)
			{
				for (int t = b + j; t < n; t++)
				{

				}
			}
		}
	}
}

int main4()
{
	int m, n, a, b;
	while (cin >> m >> n >> a >> b)
	{
		vector<vector<int>> nums(m, vector<int>(n));
	}

	system("pause");
	return 0;
}