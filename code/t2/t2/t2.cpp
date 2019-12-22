//二维数组中的查找
#include<iostream>
#include<vector>
using namespace std;

bool Find(int target, vector<vector<int>> array)
{
	
	for (int i = 0; i < array.size(); i++)
	{
		for (int j = 0; j < array.size(); j++)
		{
			if (target < array[array.size() / 2][array.size() / 2])
			{
				if (target < array[array.size() / 2][array.size() / 2 - 1])
				{

				}
			}
		}
	}
}

int main()
{
	int m, n;

	cin >> m >> n;
	vector<vector<int>> v(m, vector<int>(n, 0));

	for (auto &i : v)
	{
		for (auto &j : i)
		{
			cin >> j;
		}
	}
	system("pause");
	return 0;
}