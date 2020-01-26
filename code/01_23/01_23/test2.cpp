//第三大的数
//https://leetcode-cn.com/problems/third-maximum-number/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int thirdMax(vector<int>& nums)
{
	sort(nums.begin(), nums.end());
	vector<int> tmp(1);
	tmp[0] = nums[0];

	for (int i = 1; i < nums.size(); i++)
	{
		if ((tmp.back()) != nums[i])
		{
			tmp.push_back(nums[i]);
		}
	}

	if (tmp.size() == 1)
	{
		return tmp[0];
	}
	else if (tmp.size() == 2)
	{
		return tmp[1];
	}
	else
	{
		return tmp[tmp.size() - 3];
	}
}

int main2()
{
	vector<int> nums = {1, 2};

	cout << thirdMax(nums) << endl;
	system("pause");
	return 0;
}