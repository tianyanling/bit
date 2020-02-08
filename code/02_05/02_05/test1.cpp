//×Ó¼¯
//https://leetcode-cn.com/problems/subsets/
#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums)
{
	vector<vector<int>> result;
	vector<int> tmp;
	getResult(result, nums, 0, tmp);
	return result;
}

void getResult(vector<vector<int>>& result, vector<int> nums, int startPoint, vector<int> tmp)
{
	result.push_back(tmp);
	for (int i = startPoint; i < nums.size(); i++)
	{
		tmp.push_back(nums[i]);
		getResult(result, nums, i + 1, tmp);
		tmp.pop_back();
	}
}

int main()
{

	system("pause");
	return 0;
}