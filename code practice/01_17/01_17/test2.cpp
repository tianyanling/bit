//合并两个有序数组
//https://leetcode-cn.com/problems/merge-sorted-array/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
	vector<int> tmp;
	tmp = nums1;
	nums1.clear();

	for (int i = 0; i < m; i++)
	{
		nums1.push_back(tmp[i]);	
	}

	for (auto & e : nums2)
	{
		nums1.push_back(e);
	}
	sort(nums1.begin(), nums1.end());

	for (int i = 0; i < nums1.size(); i++)
	{
		cout << nums1[i] << " ";
	}
	cout << endl;
}

int main2()
{
	vector<int> nums1 = { -1,0,0,1,2,3,0,0,0 };
	vector<int> nums2 = { 2,5,6 };
	merge(nums1, 6, nums2, 3);
	system("pause");
	return 0;
}