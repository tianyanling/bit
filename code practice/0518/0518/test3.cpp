#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int x, y;
	multimap<int, int> mp;
	int n;
	while (cin>>n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> x >> y;
			mp.insert(pair<int, int>(x, y));
		}
		
		auto it = mp.begin();
		for (; it != mp.end(); it++)
		{
			cout << it->first << " " << it->second << endl;
		}
	}

	
	return 0;
}