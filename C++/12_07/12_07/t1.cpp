#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int getValue(vector<int> gifts, int n)
{
	// write code here
	sort(gifts.begin(), gifts.end());

	return (count(gifts.begin(), gifts.end(), gifts[n / 2]) > n / 2) ? gifts[n / 2] : 0;
}

int main1()
{
	vector<int> gifts;
	for (auto &i : gifts)
	{
		cin >> i;
	}
	system("pause");
	return 0;
}