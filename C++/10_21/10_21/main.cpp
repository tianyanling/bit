//����һ���������� nums ��һ��Ŀ��ֵ target�������ڸ��������ҳ���ΪĿ��ֵ���� ���� ���������������ǵ������±ꡣ
#include<iostream>
#include<vector>
using namespace std;

int twoSum(vector<int>& nums, int target)
{
	if (nums.empty())
	{
		return 0;
	}

	int i, j;
	for (i = 0; i < nums.size(); i++)
	{
		for (j = i; j < nums.size(); j++)
		{
			if (target == nums[i] + nums[j])
			{
				cout << "[" <<i << "," << j << "]" << endl;
			}
		}
	}
	return 0;
}

int main()
{
	vector<int>  nums{ 2,7,1,8 };
	int target = 9;

	cout<<twoSum(nums, target);
	system("pause");
	return 0;
}