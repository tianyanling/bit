#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int mon, time, sum;
		vector<int> v;
		vector<vector<int>> tmp;
		for (int i = 0; i < n; i++)
		{
			v.clear();
			for (int j = 0; i < 3; j++)
			{
				cin >> mon >> time >> sum;
				v.push_back(mon);
				v.push_back(time);
				v.push_back(sum);
			}
			tmp.push_back(v);
		}

		//两小时为7200s,计算从该时间+7200s以内所有的销售额总和，选出销售总额最大的起始时间
		int max_count = 0;
		for (int k = 0; k < n; k++)
		{
			int count = 0;
			for (int i = 0; i < n; i++)
			{
				int j = tmp[i][1];
				if (j < tmp[i][1] + 7200)
				{
					count += tmp[i][2];
				}
			}
			if (count > max_count)
			{
				max_count = count;
			}
		}
		cout << max_count << endl;
	}
	return 0;
}