#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lengthOfLIS(vector<int>& nums)
{
	vector<int> minnums;
	for (int v : nums)
	{
		if (!minnums.size() || v > minnums.back())
			minnums.push_back(v);
		else
			*lower_bound(minnums.begin(), minnums.end(), v) = v;//求下界，返回大于等于v的值
		//类似于二分查找
		//int lower_bound(int *A,int x,int y,int v)
		//{
		//		int m;
		//		while (x<y) 
		//		{
		//				m = x + (y - x) / 2;
		//				if (A[m) >= v)    
		//					y = m;
		//				else 
		//					x = m + 1;
		//		}
		//		return x;
		//}
	}
	return minnums.size();
}

int main()
{
	vector<int> nums = { 1,5 ,3,4,6};
	cout << lengthOfLIS(nums) << endl;
	system("pause");
	return 0;
}