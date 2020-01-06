//两个元组的交集
//https://leetcode-cn.com/problems/intersection-of-two-arrays/
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
{
	unordered_set<int> s1;
	for (auto & e : nums1)
	{
		s1.insert(e);
	}

	unordered_set<int> s2;
	for (auto &e : nums2)
	{
		s2.insert(e);
	}

	vector<int> ret;
	for (auto &e : s1)
	{
		if (s2.find(e) != s2.end())
		{
			ret.push_back(e);
		}
	}
	return ret;
}

int main()
{
	vector<int> nums1{ 1,2,2,1 };
	vector<int> nums2{ 2,2 };

	vector<int> res = intersection(nums1, nums2);
	
	
	system("pause");
	return 0;
}