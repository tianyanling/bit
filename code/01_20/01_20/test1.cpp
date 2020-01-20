//存在重复元素
//https://leetcode-cn.com/problems/contains-duplicate/
//给定一个整数数组，判断是否存在重复元素。
//如果任何值在数组中出现至少两次，函数返回 true。
//如果数组中每个元素都不相同，则返回 false。
#include<iostream>
#include<vector>
#include<set>
#include<unordered_map>
using namespace std;

//方法一
#if 0
bool containsDuplicate(vector<int>& nums) 
{
	unordered_map<int, int> mp;
	for (auto & e : nums)
	{
		if (mp.count(e) != NULL)
		{
			return true;
		}
		else
		{
			mp[e] ++;
		}
	}
	return false;
}
#endif
//方法二，set中的值唯一
bool containsDuplicate(vector<int>& nums)
{
	set<int> st;

	for (auto & e : nums)
	{
		st.insert(e);
	}
	return nums.size() != st.size();
}

int main1()
{
	vector<int> v = { 1,2,3,4 };
	cout << containsDuplicate(v) << endl;
 	system("pause");
	return 0;
}