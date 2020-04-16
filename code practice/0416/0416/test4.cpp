#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int m, n;
	while (cin >> m >> n)
	{
		int num;
		vector<int> tmp;
		for (int i = 0; i < m; i++)
		{
			cin >> num;
			tmp.push_back(num);
		}

		sort(tmp.begin(), tmp.end());

		int pos = 0;
		for (int i = 0; i < tmp.size(); i++)
		{
			if (tmp[i] == n)
			{
				pos = i;
			}
		}
		int count = 0;
		if ((tmp.size() - pos) > pos)
		{
			count = tmp.size() - pos - 2 - pos;
		}
		else
		{
			count = pos - tmp.size() - 1 - pos;
		}
		cout << count << endl;
	}
	return 0;
}