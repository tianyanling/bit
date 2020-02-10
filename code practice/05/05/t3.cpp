//删除排序数组中的重复项
//https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/
#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

int removeDuplicates(vector<int>& nums)
{
	int tmp[] = {0};
	int i = 0;
	int j = 0;
	for (i = 1; i < nums.size(); i++)
	{
		if (nums[i] != nums[i-1])
		{
			tmp[j + 1] = nums[i];
			j++;
		}
	}
	return  tmp[j];
}

int main()
{
	vector<int> v;
	int nums[11] = { 1,2,2,3,3,4,5,6,7,8};
	v.insert(v.begin(), nums, nums + 11);

	cout << removeDuplicates(v) << endl;
	system("pause");
	return 0;
} 