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

		//��СʱΪ7200s,����Ӹ�ʱ��+7200s�������е����۶��ܺͣ�ѡ�������ܶ�������ʼʱ��
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