//�Ƴ�Ԫ��
//����һ������ nums ��һ��ֵ val������Ҫԭ���Ƴ�������ֵ���� val ��Ԫ�أ������Ƴ���������³���
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int removeElement(vector<int>& nums, int val) 
{
	int sum = 0;
	sum = count(nums.begin(), nums.end(), val);

	return nums.size() - sum;
}

int main1()
{
	vector<int> nums = { 3,2,2,3 };
	int val = 3;

	cout << removeElement(nums, val) << endl;
	system("pause");
	return 0;
}