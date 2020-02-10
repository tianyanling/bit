//°´ÆæÅ¼ÅÅÐòÊý×é
//https://leetcode-cn.com/problems/sort-array-by-parity/
#include<iostream>
#include<vector>
using namespace std;

vector<int> sortArrayByParity(vector<int>& A)
{
	vector<int> tmp;
	vector<int> ret;
	for (int i = 0; i < A.size(); i++)
	{
		if (A[i] % 2)
		{
			tmp.push_back(A[i]);
		}
		else
		{
			ret.push_back(A[i]);
		}
	}

	for (auto & e : tmp)
	{
		ret.push_back(e);
	}
	return ret;
}

int main1()
{
	vector<int> A = { 1,3,3,4,6,8,2,3,4 };

	vector<int> ret = sortArrayByParity(A);
	for (auto & e : ret)
	{
		cout << e << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}