#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main3()
{
	int m, n;
	set<int, int> st;
	vector<int> v;
	while (cin >> m >> n)
	{
		int num;
		for (int i = 0; i < m; i++)
		{
			cin >> num;
			v.push_back(num);
		}

		for (int i = 0; i < v.size(); i++)
		{
			for (int j = 0; j < v.size(); j++)
			{
				st.insert(v[i], v[j]);
			}
		}

	/*	set<int, int>::iterator it = st.begin();
		for (; it != st.end(); it++)
		{
			cout << it-><< "," << it->second << endl;
		}*/
			for (auto &it : st)
			{
				cout << it << endl;
			}
	}
	return 0;
}