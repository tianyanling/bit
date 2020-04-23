#include <iostream>
#include <vector>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
	int i = 0, j = 0;
	double midnum = 0;
	vector<int> ret;
	while(i < nums1.size() || j < nums2.size())
	{
		if (i >= nums1.size())
		{
			ret.push_back(nums2[j]);
			j++;
			continue;
		}
		else if(j >= nums2.size())
		{
			ret.push_back(nums1[i]);
			i++;
			continue;
		}

		if (nums1[i] >= nums2[j])
		{
			ret.push_back(nums2[j]);
			j++;
		}
		else
		{
			ret.push_back(nums1[i]);
			i++;
		}
	}

	if (ret.size() % 2 == 0)
	{
		midnum = (ret[(ret.size() - 1) / 2] + ret[ret.size() / 2]) / 2.0;
	}
	else
	{
		midnum = ret[(ret.size() - 1) / 2]*1.0;
	}
	return midnum;
}

int main1()
{
	vector<int> nums1 = { 1,2,3 ,6,7,8};
	vector<int> nums2 = { 2,3 };
	cout << findMedianSortedArrays(nums1, nums2) << endl;
	system("pause");
	return 0;
}