//组队竞赛
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int team(vector<int> &v,int n)
{
	long long sum = 0;
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++)
	{
		sum += v[n + i];
	}
	return sum;
}

int main()
{
	vector<int> v;
	int n,t;

	cout << "请输入队伍个数" << endl;
	cin >> n;

	if (n <= 0)
	{
		return -1;
	}

	cout << "请输入每位成员的水平值" << endl;
	for (int i = 0; i < 3*n; i++)
	{
		cin >> t;
		v.push_back(t);
		if (t < 0)
		{
			return -1;
		}
	}
	cout << team(v, n) << endl;
	system("pause");
	return 0;
}