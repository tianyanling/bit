//找出只出现一次的元素
#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums)
{
	int res = 0;
	for (auto & i : nums)
	{
		res ^= i;
	}
	return res;
}

int main2()
{
	int nums[11] = { 1,2,3,4,2,3,1,4,17,7,7 };
	vector<int> v;
	v.insert(v.begin(), nums, nums + 11);

	cout << singleNumber(v) << endl;

	system("pause");
	return 0;
}