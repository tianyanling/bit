//�����������������
//https://leetcode-cn.com/problems/shortest-unsorted-continuous-subarray/submissions/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findUnsortedSubarray(vector<int>& nums)
{
	vector<int> temp(nums.begin(), nums.end());
	sort(temp.begin(), temp.end());
	int left = 0;
	int right = nums.size() - 1;//����˫ָ�룬 һ��ָ��ͷ�� һ��ָ��β
	while (left < right)
	{
		int flag = 1; //����һ��flag
		if (nums[left] == temp[left]) //��ָ���Ӧ��ȣ�left++,���Ƽ����Ƚ���һ��
		{
			left++;
			flag = 0; 
		} 

		if (nums[right] == temp[right]) //��ָ����ȣ�j--�����ƱȽ���һ��
		{
			right--; 
			flag = 0; 
		}

		if (flag == 1)//����ȣ�������ѭ��
		{
			break;
		}
	}

	if (left >= right)//������������
	{
		return 0;
	}
	return right - left + 1;
}

int main1()
{
	vector<int> nums = {1,2,3,4};

	cout << findUnsortedSubarray(nums) << endl;
	system("pause");
	return 0;
}