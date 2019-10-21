//给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
#include<iostream>
#include<vector>
using namespace std;

int twoSum(vector<int>& nums, int target)
{
	if (nums.empty())
	{
		return 0;
	}

	int i, j;
	for (i = 0; i < nums.size(); i++)
	{
		for (j = i; j < nums.size(); j++)
		{
			if (target == nums[i] + nums[j])
			{
				cout << "[" <<i << "," << j << "]" << endl;
			}
		}
	}
	return 0;
}

int main()
{
	vector<int>  nums{ 2,7,1,8 };
	int target = 9;

	cout<<twoSum(nums, target);
	system("pause");
	return 0;
}