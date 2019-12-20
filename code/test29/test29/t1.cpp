//求正数数组的最小不可组成和
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int getFirstUnFormedNum(vector<int> arr, int len) 
{
	int min = 0;
	int max = 0;
	sort(arr.begin(), arr.end());
	for (int i = 0; i < arr.size(); i++)
	{
		min = arr[0];
		max += arr[i];
	}

	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = max; j >= arr[i]; j--)
		{

		}
	}
	return 0;
}

int main1()
{
	vector<int> arr;

	system("pause");
	return 0;
}