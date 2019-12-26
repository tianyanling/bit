//连续子数组最大和
//https://www.nowcoder.com/practice/459bd355da1549fa8a49e350bf3df484?tpId=13&tqId=11183&rp=1&ru=%2Factivity%2Foj&qru=%2Fta%2Fcoding-interviews%2Fquestion-ranking&tPage=2
#include<iostream>
#include<vector>
using namespace std;

//思路：用sum 来计算前i个数组的和，当sum的值小于0时，把sum置为0
//用ans来判断前i+1个元素之和与前i个元素之和的大小
int FindGreatestSumOfSubArray(vector<int> array) 
{
	int ans = -1000000;
	int sum = 0;

	for (int i = 0; i<array.size(); i++)
	{
		sum += array[i];
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

int main8()
{
	vector<int> v;

	int num[8] = { 1,3,-9,3,4,6,-9,9 };
	v.insert(v.begin(), num, num + 8);

	cout << FindGreatestSumOfSubArray(v) << endl;
	system("pause");
	return 0;
}