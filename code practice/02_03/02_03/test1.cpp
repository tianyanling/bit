//最短连续无序子数组
//https://leetcode-cn.com/problems/shortest-unsorted-continuous-subarray/submissions/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findUnsortedSubarray(vector<int>& nums)
{
	vector<int> temp(nums.begin(), nums.end());
	sort(temp.begin(), temp.end());
	int left = 0;
	int right = nums.size() - 1;//设置双指针， 一个指向头， 一个指向尾
	while (left < right)
	{
		int flag = 1; //设置一个flag
		if (nums[left] == temp[left]) //左指针对应相等，left++,右移继续比较下一个
		{
			left++;
			flag = 0; 
		} 

		if (nums[right] == temp[right]) //右指针相等，j--，左移比较下一个
		{
			right--; 
			flag = 0; 
		}

		if (flag == 1)//不相等，则跳出循环
		{
			break;
		}
	}

	if (left >= right)//本是有序数组
	{
		return 0;
	}
	return right - left + 1;
}

int main1()
{
	vector<int> nums = {1,2,3,4};

	cout << findUnsortedSubarray(nums) << endl;
	system("pause");
	return 0;
}