//三数之和
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums)
{
	vector<vector<int>> ret;
	sort(nums.begin(), nums.end());

	for (int i = 0; i < nums.size(); i++)
	{
		int left = i + 1;
		int right = nums.size() - 1;
		if (nums[i] > 0)
		{
			break;
		}
		if (i > 0 && nums[i] == nums[i - 1])
		{
			continue;
		}

		while (left < right)
		{
			if (nums[left] + nums[right] == -nums[i])
			{
				vector<int> tmp{ nums[i], nums[left], nums[right] };
				ret.push_back(tmp);
				tmp.clear();
				while (left < right && nums[left] == nums[left+1])
				{
					left++;
				}
				while (left < right && nums[right] == nums[right-1])
				{
					right--;
				}
				left++;
				right--;
			}
			else if (nums[left] + nums[right] < -nums[i])
			{
				left++;
			}
			else
			{
				right--;
			}
		}
	}
	return ret;
}

int main1()
{
	vector<int> nums{ -1, 0, 1, 2, -1, -4 };

	vector<vector<int>> res = threeSum(nums);

	for (int i = 0; i < res.size(); i++)
	{
		for (int j = 0; j < res[0].size(); j++)
		{
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}