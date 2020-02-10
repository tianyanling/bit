//排序子序列
//在数组中找到连续递增或连续递减的子序列
//例如：1 2 3 2 2 1   输出结果为2
#include<iostream>
#include<vector>
using namespace std;

int findSortquence(vector<int> v,int n)
{
	int i;
	int count = 0;

	for (i = 1; i < n - 1; i ++)
	{
		if (v[i] > v[i - 1] && v[i] > v[i + 1] || v[i] < v[i - 1] && v[i] < v[i + 1])//找出数组序列的波峰波谷
		{
			count++;

			if (n - 3 != i)
			{
				i++;
			}
		}
	}
	return count + 1;
}

int main1()
{
	vector<int> v;
	int n, t;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> t;
		v.push_back(t);
	}

	cout << findSortquence(v, n) << endl;
	system("pause");
	return 0;
}