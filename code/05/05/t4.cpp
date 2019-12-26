//4��ֻ����һ�ε�Ԫ��ii
//https://leetcode-cn.com/problems/single-number-ii/submissions/
//����һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ�����⣬
//����ÿ��Ԫ�ؾ����������Ρ��ҳ��Ǹ�ֻ������һ�ε�Ԫ�ء�
#include<iostream>
#include<vector>
using namespace std;
#if 0
//˼·1�����й���sum��tmp�Ĺ�ʽִ�й����κ�sum��tmp��ֵΪ0
//��Ա��⣬�����ҳ�û�г������ε�����
int singleNumber(vector<int>& nums)
{
	int sum = 0, tmp = 0;

	for (auto &i : nums)
	{
		sum = (sum ^ i) & ~tmp;
		tmp = (tmp ^ i) & ~sum;
	}
	return sum;
}
#elif 1
//˼·2������ÿһ�����������ƣ�ÿһλ�����ж�������λת��Ϊ���һλ����������һλ1�ĸ�����3�ı�������ֻ����һ�ε����ֵ����һλΪ0������Ϊ1
//���ڶ����Ƶ��ֳ���32λ��ÿһλ��Ҫ�ж��Ƿ����1������Ҫ����32��ѭ��
//���жϵ�����ÿ������iλ���Ϳ����жϸ����ֵ�ÿһλ��1�ĸ����������жϳ�ֻ����һ�ε�����
int singleNumber(vector<int>& nums)
{
	int sum = 0;
	int count = 0;

	for (int i = 0; i < 32; i++)
	{
		for (auto j : nums)
		{
			count += j >> i & 1u;//u��ʾunsigned
		}
		if (count % 3)
		{
			sum |= 1u << i;
		}
		count = 0;
	}
	return sum;
}
#endif

int main4()
{
	int nums[10] = { 1,3,1,7,3,1,3,17,7,7 };
	vector<int> v;
	v.insert(v.begin(), nums, nums + 10);

	cout << singleNumber(v) << endl;
	system("pause");
	return 0;
}