//��������λ��
//����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ����������������
//���Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int searchInsert(vector<int>& nums, int target) 
{
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] == target)
		{
			return i;
		}

		if (nums[i] < target && nums[i + 1] > target)
		{
			return i + 1;
		}
		if (nums[i] > target)
		{
			return 0;
		}
	}
	return nums.size();
}

int main()
{
	vector<int> nums = { 1,2,3,5,6 };
	int target = 0;

	cout << searchInsert(nums, target) << endl;
	system("pause");
	return 0;
}