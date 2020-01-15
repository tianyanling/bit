//搜索插入位置
//给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。
//如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int searchInsert(vector<int>& nums, int target) 
{
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] == target)
		{
			return i;
		}

		if (nums[i] < target && nums[i + 1] > target)
		{
			return i + 1;
		}
		if (nums[i] > target)
		{
			return 0;
		}
	}
	return nums.size();
}

int main()
{
	vector<int> nums = { 1,2,3,5,6 };
	int target = 0;

	cout << searchInsert(nums, target) << endl;
	system("pause");
	return 0;
}