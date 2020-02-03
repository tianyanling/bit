#include<iostream>
#include<vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) 
{
	int start = -1, end = 0;
	int count = 0;
	if (nums.empty())
	{
		return { -1,-1 };
	}

	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] == target)
		{
			start = i;
			break;
		}
	}

	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] == target )
		{
			count++;
		}
		end = start + count -1;
	}

	if (start == -1)
	{
		return{ -1,-1 };
	}
	return { start,end };
}
 
int main2()
{
	vector<int> nums = { 2,2,3,3 };
	vector<int> res = searchRange(nums, 2);

	
	for (auto &e : res)
	{
		cout << e << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}