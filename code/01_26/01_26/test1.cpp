#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) 
{
	set<int> tmp;
	vector<int> ret;
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = i + 1; j < nums.size(); j++)
		{
			if (nums[i] + nums[j] == target)
			{
				tmp.insert(i);
				tmp.insert(j);
			}
		}
	}

	for (auto &e : tmp)
	{
		ret.push_back(e);
	}
	return ret;
}

int main()
{
	vector<int> nums = { 3,2,4 };

	vector<int> tmp = twoSum(nums, 6);
	for (auto & e : tmp)
	{
		cout << e << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}