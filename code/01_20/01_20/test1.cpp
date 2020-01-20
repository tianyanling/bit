//�����ظ�Ԫ��
//https://leetcode-cn.com/problems/contains-duplicate/
//����һ���������飬�ж��Ƿ�����ظ�Ԫ�ء�
//����κ�ֵ�������г����������Σ��������� true��
//���������ÿ��Ԫ�ض�����ͬ���򷵻� false��
#include<iostream>
#include<vector>
#include<set>
#include<unordered_map>
using namespace std;

//����һ
#if 0
bool containsDuplicate(vector<int>& nums) 
{
	unordered_map<int, int> mp;
	for (auto & e : nums)
	{
		if (mp.count(e) != NULL)
		{
			return true;
		}
		else
		{
			mp[e] ++;
		}
	}
	return false;
}
#endif
//��������set�е�ֵΨһ
bool containsDuplicate(vector<int>& nums)
{
	set<int> st;

	for (auto & e : nums)
	{
		st.insert(e);
	}
	return nums.size() != st.size();
}

int main1()
{
	vector<int> v = { 1,2,3,4 };
	cout << containsDuplicate(v) << endl;
 	system("pause");
	return 0;
}