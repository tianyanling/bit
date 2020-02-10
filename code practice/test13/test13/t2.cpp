//ÌøÊ¯°å

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void isNum(int n, vector<int> &v)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			v.push_back(i);
			if (n / i != i)
			{
				v.push_back(n/i);
			}
		}
	}
}

int main()
{
	int N, M;
	vector<int> v;

	while (cin >> N >> M)
	{
		vector<int> res(M + 1, 0);
		res[N] = 1;
		for (int i = N; i < M; i++)
		{
			if (res[i] == 0)
			{
				continue;
			}

			isNum(i, v);

			for (int j = 0; j < v.size(); j++)
			{
				if (v[j] + i <= M && res[v[j] +1] != 0)
				{
					res[v[j] + i] = min(res[v[j] + i], res[i] + 1);
				}
				else if(v[j] + i <= M)
				{
					res[v[j] + i] = res[i] +1;
				}
			}
		}
		if (res[M] == 0)
		{
			cout << -1 << endl;
		}
		else
		{
			cout << res[M] - 1 << endl;
		}
	}
	system("pause");
	return 0;
}