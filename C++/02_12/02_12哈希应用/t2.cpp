#include<iostream>
#include<vector>
using namespace std;

int main2()
{
	int n; 
	cin >> n;
	vector<int> nums(n);

	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}

	int ans = -1000000;
	int sum = 0;

	for (int i = 0; i<n; i++)
	{
		sum += nums[i];
		if (sum > ans)
		{
			ans = sum;
		}
		if (sum < 0)
		{
			sum = 0;
		}
	}
	cout << ans << endl;
	system("pause");
	return 0;
}