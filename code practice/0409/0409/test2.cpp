#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	while (cin >> n && n > 0)
	{
		vector<int> height(n), dp(n, 1);
		int maxLen = 1;
		for (int i = 0; i < n; ++i)
		{
			cin >> height[i];
			for (int j = i - 1; j >= 0; --j)
			{
				if (height[j] < height[i])
				{
					dp[i] = max(dp[i], dp[j] + 1);
				}
			}
			maxLen = max(maxLen, dp[i]);
		}
		cout << maxLen << endl;
	}
	system("pause");
	return 0;
}