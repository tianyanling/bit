//求最大子数组之和
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#if 0
//暴力求解
//从第一个数开始向后累加，每次累加后与前面的和进行比较，保存较大的值
//再从第二个元素开始向后累加...
//时间复杂度为O(n^2)
int FindGreatestSumOfSubArray(const vector<int> &v)
{
	int i, j;
	int maxsum = -1000000;//防止子数组之和为负数，故定义一个极小的数

	for (i = 0; i < v.size(); i++)
	{
		int cursum = 0;
		for (j = i; j < v.size(); j++)
		{
			cursum += v[j];
			if (cursum > maxsum)
			{
				maxsum = cursum;
			}
		}
	}
	return maxsum;
}
#endif

#if 0
//分治思想（先分后合）
//分：与归并排序的分一致，都是将一个数组分成若干组单独的元素
//合：将每两组元素进行合并，计算各组元素最大连续和以及两组元素的最大连续和
//在计算两组元素最大和时，取中间向两边遍历 ，取出最大和
//同理，可以计算出所有元素的最大子段和
int dealGreatSum(const vector<int> &v, int begin, int end)
{
	if (begin == end)
	{
		return v[begin];
	}

	int mid = (begin + end) / 2;
	int leftmax = dealGreatSum(v, begin, mid);
	int rightmax = dealGreatSum(v, mid + 1, end);

	int corssmax = 0;//两组元素的最大子段和
	int i;
	int sum = 0;
	int tmpmax = v[mid];

	for (i = mid; i >= begin; i--)
	{
		sum += v[i];
		if (sum > tmpmax)
		{
			tmpmax = sum;
		}
	}
	corssmax += tmpmax;

	sum = 0;
	tmpmax = v[mid + 1];
	for (i = mid + 1; i < end; i++)
	{
		sum += v[i];
		if (sum > tmpmax)
		{
			tmpmax = sum;
		}
	}
	corssmax += tmpmax;

	return max(max(leftmax, rightmax), corssmax);
}

int FindGreatestSumOfSubArray(const vector<int> &v)
{
	return dealGreatSum(v, 0, v.size() - 1);
}
#endif

#if 1
//动规思想
//定义两个变量，一个变量是计算从数组第一个元素开始遍历所有元素的和，如果当前面元素的和小于0，则重新从0开始计算
//另一个变量是保存一段元素的最大子段和，如果其中一段元素的和大于之前一段元素之和，则重新开始计算

int FindGreatestSumOfSubArray(const vector<int> &v)
{
	int i;
	int sum = v[0];
	int tmpmax = v[0];
	for (i = 1; i < v.size(); i++)
	{
		if (sum >= 0)
		{
			sum += v[i];
		}
		else
		{
			sum = v[i];
		}

		if (tmpmax < sum)
		{
			tmpmax = sum;
		}
	}
	return tmpmax;
}
#endif

#if 0
//贪心算法
//丢掉和为负数的字数组，只留下和为正数的子数组
//时间复杂度为O(n)
int FindGreatestSumOfSubArray(const vector<int> &v)
{
	int ans = -100000;//防止子数组之和为负数，故定义一个极小的数
	int sum = 0;

	for (int i = 0; i<v.size(); i++)
	{
		sum += v[i];
		if (sum > ans)
		{
			ans = sum;
		}
		if (sum < 0)
		{
			sum = 0;
		}
	}
	return ans;
}
#endif

int main()
{
	vector<int> v;
	int t,n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		v.push_back(t);
	}
	cout << FindGreatestSumOfSubArray(v) << endl;
	system("pause");
	return 0;
}