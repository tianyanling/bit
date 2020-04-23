#include <iostream>
#include <vector>
using namespace std;

int Binary(vector<int> nums,int k)
{
	int left = 0;
	int right = nums.size() - 1;
	int mid = 0;
	while (left <= right)
	{
		mid = (right - left) / 2 + left;
		if (nums[mid] < k)
		{
			left = mid + 1;
		}
		else if(nums[mid] > k)
		{
			right = mid-1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main3()
{
	vector<int> nums = { 1,2,5,7,9,10,14,15,56,78 };
	int k = 8;
	cout << Binary(nums, k) << endl;
	system("pause");
	return 0;
}