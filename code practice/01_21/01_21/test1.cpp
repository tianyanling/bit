//有序数组的平方
//https://leetcode-cn.com/problems/squares-of-a-sorted-array/submissions/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> sortedSquares(vector<int>& A) 
{
	vector<int> tmp;
	for (int i = 0; i < A.size(); i++)
	{
		tmp.push_back(pow(A[i], 2));
	}

	sort(tmp.begin(), tmp.end());
	return tmp;
}

int main1()
{
	vector<int> A = { -4, -1, 0, 1, 2, 3 };

	vector<int> ret = sortedSquares(A);

	for (auto & e : ret)
	{
		cout << e << " ";
	}
	cout <<endl;
	system("pause");
	return 0;
}