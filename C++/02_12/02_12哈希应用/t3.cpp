	#include<iostream>
	#include<vector>
	using namespace std;

	bool is24(vector<int> nums,int ret,double result)
	{
		if (nums.empty())
		{
			return result == ret;
		}
		for (int i = 0; i<nums.size(); i++)
		{
			vector<int> tmp(nums);
			tmp.erase(tmp.begin() + i);
			if (is24(tmp, ret,result + nums[i])
				|| is24(tmp, ret,result - nums[i])
				|| is24(tmp, ret,result*nums[i])
				|| is24(tmp, ret,result / nums[i]))
			{
				return true;
			}
		}
		return false;
	}
	int main()
	{
		vector<int> nums(4, 0);
		for (int i = 0; i < 4; i++)
		{
			cin >> nums[i];
		}
		if (is24(nums,24, 0))
		{
			cout << "true" << endl;
		}
		else
		{
			cout << "false" << endl;
		}
		system("pause");
		return 0;
	}