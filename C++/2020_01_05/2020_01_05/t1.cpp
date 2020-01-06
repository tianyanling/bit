//重复n次的元素
//https://leetcode-cn.com/problems/n-repeated-element-in-size-2n-array/
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int repeatedNTimes(vector<int>& A) 
{
	unordered_map<int, int> um;

	for (auto & e : A)
	{
		um[e]++;
	}

	for (auto & e : um)
	{
		if (e.second == A.size() / 2)
		{
			return e.first;
		}
	}
	return -1;
}

int main1()
{
	vector<int> v{ 1,3,4,2,3,3 };
	
	cout << repeatedNTimes(v) << endl;
	system("pause");
	return 0;
}