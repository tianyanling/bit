#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main4()
{
	int T;//T组数据
	int m, n;
	int x1, y1, x2, y2;
	int k;
	int x, y;
	char op;
	map<int, int> mp;
	vector<int> tmp;
	while (cin >> T)
	{
		cin >> m >> n;
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> k;
		cin >> x >> y >> op;

		if (x1 == x && y1 == y && op == 'B')
		{
			return -1;
		}

		for (int i = 0; i < m; i++)
		{
			cin >> n;
			mp.insert(i, n);
			for (int j = 0; j < n; j++)
			{
				if (op == 'r')//东
				{
					tmp.push_back(x);
				}
			}
		}
	}
	system("pause");
	return 0;
}