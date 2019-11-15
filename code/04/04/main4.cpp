//删除排序数组中的重复项
#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums) 
{
	vector<int> vi;
	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i] == nums[i - 1])
		{
			nums.erase(i);
		}
	}
}

int main()
{
	vector<int> nums;
	system("pause");
	return 0;
}