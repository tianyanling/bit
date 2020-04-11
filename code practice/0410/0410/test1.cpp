#include <iostream>
#include <vector>
using namespace std;

int main1()
{
	int n;
	while (cin >> n)
	{
		int min_sum = 4294967294;
		vector<int> v;
		int max_x = 0;
		int pos = 0;
		int x, y;
		for (int i = 0; i < n; i++)
		{
			cin >> x >> y;
			if (x > max_x)
			{
				max_x = x;
			}
			v.push_back(x);
		}

		
		for (int j = 0; j < max_x; j++)
		{
			pos = j;
			int sum = 0;
			for (int i = 0; i < v.size(); i++)
			{
				sum += v[i] - pos;
			}
			if (sum > min_sum)
			{
				min_sum = sum;
			}
		}
		cout << min_sum << endl;
	}
	system("pause");
	return 0;
}