#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	
	while (cin >> n)
	{
		int f[10000] = { 0 };
		int Max = 0;
		vector<int> v(n);

		for (auto &i : v)
		{
			cin >> i;
		}

		for (int i = 0; i < v.size(); i++)
		{
			f[i] = max(f[i - 1] + v[i], v[i]);

			if (f[i] > Max)
			{
				Max = f[i];
			}
		}
		cout << Max << endl;
	}
	system("pause");
	return 0;
}