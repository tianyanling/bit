#include<iostream>
#include<vector>
using namespace std;

int rotate(vector<int> nums, int k)
{
	k = k % nums.size();
	reverse(nums.begin(), nums.begin() + nums.size() - k);
	reverse(nums.begin() + nums.size() - k, nums.end());
	reverse(nums.begin(), nums.end());
}

int main()
{
	vector<int> nums = { 1,2,3,4,5,6 ,7};
	cout << rotate(nums, 3);

	system("pause");
	return 0;
}