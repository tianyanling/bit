//×Ó¼¯
//https://leetcode-cn.com/problems/subsets/
#include<iostream>
#include<vector>
using namespace std;

//vector<vector<int>> subsets(vector<int>& nums) 
//{
//
//}

int main1()
{
	//vector<int> nums = { 1,2,3 };
	int a[] = { 2, 4, 6, 8, 10 }, *p, **k;
	p = a;
	k = &p;
	printf(" % d", *(p++));
	printf(" % d\n", **k);
	system("pause");
	return 0;
}