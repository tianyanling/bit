//4、只出现一次的元素ii
//https://leetcode-cn.com/problems/single-number-ii/submissions/
//给定一个非空整数数组，除了某个元素只出现一次以外，
//其余每个元素均出现了三次。找出那个只出现了一次的元素。
#include<iostream>
#include<vector>
using namespace std;
#if 0
//思路1：其中关于sum和tmp的公式执行过三次后sum与tmp的值为0
//针对本题，可以找出没有出现三次的数字
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
//思路2：利用每一个数（二进制）每一位（待判断数字移位转换为最后一位），如果最后一位1的个数是3的倍数，则只出现一次的数字的最后一位为0，否则为1
//由于二进制的字长有32位，每一位都要判断是否存在1，故需要进行32次循环
//待判断的数字每次右移i位，就可以判断该数字的每一位有1的个数，即可判断出只出现一次的数字
int singleNumber(vector<int>& nums)
{
	int sum = 0;
	int count = 0;

	for (int i = 0; i < 32; i++)
	{
		for (auto j : nums)
		{
			count += j >> i & 1u;//u表示unsigned
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