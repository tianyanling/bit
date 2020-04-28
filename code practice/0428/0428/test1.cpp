#include <iostream>
#include <unordered_map>
using namespace std;

int main1()
{
	int n, m;//n表示顶点，m表示变数
	while (cin >> n >> m)
	{
		int u, v;
		unordered_map<int, int> mp;
		for (int i = 0; i < m; i++)
		{
			cin >> u >> v;
			mp.insert(pair<int, int>(u, v));
		}

		if (m < n)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;	
		}
	}
	system("pause");
	return 0;
}
