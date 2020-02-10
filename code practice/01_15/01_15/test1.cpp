//移除元素
//给定一个数组 nums 和一个值 val，你需要原地移除所有数值等于 val 的元素，返回移除后数组的新长度
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int removeElement(vector<int>& nums, int val) 
{
	int sum = 0;
	sum = count(nums.begin(), nums.end(), val);

	return nums.size() - sum;
}

int main1()
{
	vector<int> nums = { 3,2,2,3 };
	int val = 3;

	cout << removeElement(nums, val) << endl;
	system("pause");
	return 0;
}