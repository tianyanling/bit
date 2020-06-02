//排序子序列
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		vector<int> tmp;
		int num;
		for (int i = 0; i < n; i++)
		{
			cin >> num;
			tmp.push_back(num);
		}

		int count = 0;
		int i = 0;
		while (i < n)
		{
			if (tmp[i] < tmp[i + 1])//非递减序列
			{
				while (i < n && tmp[i] <= tmp[i + 1])
				{
					i++;
				}
				count++;
				i++;
			}
			else if (tmp[i] > tmp[i + 1])//非递增序列
			{
				while (i < n && tmp[i] >= tmp[i + 1])
				{
					i++;
				}
				count++;
				i++;
			}
			else//tmp[i] == tmp[i+1]
			{
				i++;
			}
		}
		cout << count << endl;
	}
	return 0;
}