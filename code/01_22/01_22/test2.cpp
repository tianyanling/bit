//Ѱ���������������
//https://leetcode-cn.com/problems/find-pivot-index/submissions/
#include<iostream>
#include<vector>
using namespace std;

int pivotIndex(vector<int>& nums)
{
	if (nums.empty())
	{
		return -1;
	}
	int left = 0;
	int sum_l = 0;
	int sum = 0;

	for (auto & e : nums)
	{
		sum += e;
	}

	for (int i = 0; i < nums.size(); i++)
	{
		if (sum == sum_l * 2 + nums[i])//������ǰ�������֮���ټ�����������
		{
 			return i;
		}
		else
		{
			sum_l += nums[i];
		}
	}
	return -1;
}

int main()
{
	vector<int> nums = {1, 7, 3, 6, 5, 6 };

	cout << pivotIndex(nums) << endl;
	system("pause");
	return 0;
}