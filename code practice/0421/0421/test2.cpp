#include <iostream>
#include <vector>
using namespace std;

int numberOfSubarrays(vector<int>& nums, int k)
{
	int left = 0, right = 0;
	int count = 0;
	int sum = 0;//计算奇数的个数
	while (right < nums.size())
	{
		if ((nums[right++] & 1) == 1)
		{
			sum++;
		}

		if (sum == k)
		{
			int tmp = right;
			while (right < nums.size() && (nums[right] & 1) == 0)
			{
				right++;
			}
			int rightCount = right - tmp;

			int leftCount = 0;
			while ((nums[left] & 1) == 0)
			{
				left++;
				leftCount++;
			}
			count += (rightCount + 1)*(leftCount + 1);
			left++;
			sum--;
		}
	}
	return count;
}

int main2()
{
	vector<int> nums = { 1,1,2,1,1 };

	cout << numberOfSubarrays(nums, 3) << endl;
	system("pause");
	return 0;
}