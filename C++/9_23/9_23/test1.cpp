//数组中次数超过一半的数字
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//算法思想
//从开始遍历，第i个元素与第i-1个元素进行比较，如果相等count++;如果不相等num=v[i]
//遍历到最后num的值就是数组中出现次数最多的数字，最后用count()函数判断该数是否超过数组一半
//时间复杂度O(n)
int findMaxTimeNum(const vector<int> &v)
{
	int icount = 1;
	int num = v[0];
	int i;
	for (i = 1; i < v.size(); i++)
	{
		if (v[i] == v[i - 1])
		{
			icount++;
		}
		else
		{
			if (icount <= 1)
			{
				num = v[i];
			}
			else
			{
				icount--;
			}
		}
	}
	if (count(v.begin(), v.end(), num) > (v.size() / 2))//STL提供的函数，作用是查找每个元素出现的次数
	{
		return num;
	}
	return 0;
}

int main1()
{
	vector<int> v;
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(2);
	v.push_back(2);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(2);
	v.push_back(2);
	v.push_back(3);

	cout << findMaxTimeNum(v) << endl;
	system("pause");
	return 0;
}