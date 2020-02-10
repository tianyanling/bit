//最小的k个数
//https://www.nowcoder.com/questionTerminal/6a296eb82cf844ca8539b57c23e6e9bf?f=discussion
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> GetLeastNumbers_Solution(vector<int> input, int k) 
{
	vector<int> ret;

	if (input.empty() || k > input.size() || k == 0)
	{
		return ret;
	}

	sort(input.begin(),input.end());

	for (int i = 0; i < k; i++)
	{
		ret.push_back(input[i]);
	}
	return ret;
}

int main()
{
	vector<int> input{ 1,2,5,6,4,3,7,8 };

	GetLeastNumbers_Solution(input, 4);
	system("pause");
	return 0;
}