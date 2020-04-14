#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m, s;
	vector<int> tmp;
	int count = 0;
	int path;
	while (cin >> n >> m >> s)
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				cin >> path;
				tmp.push_back(path);
			}
		}

		for (int i = 0; i < tmp.size(); i++)
		{
			if (tmp[i] == s && tmp[i] != 0)
			{
				count++;
			}

			if (tmp[i] == s && tmp[i] == 0)
			{
				cout << "0" << endl;
				break;
			}
		}
		if (count == 2)
		{
			cout << "0" << endl;
		}
	}
	return 0;
}