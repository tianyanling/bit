//Î¢ÐÅºì°ü
//https://www.nowcoder.com/questionTerminal/fbcf95ed620f42a88be24eb2cd57ec54?toCommentId=87162
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int getValue(vector<int> gifts, int n)
{
	int ret = 0;
	sort(gifts.begin(), gifts.end());

	ret = gifts[n / 2];
	
	return (count(gifts.begin(), gifts.end(), ret)) > (n / 2) ? ret : 0;
}

int main1()
{
	int n;
	

	while (cin >>n)
	{
		vector<int> gifts(n);

		for (auto &i : gifts)
		{
			cin >> i;
		}
		cout << getValue(gifts, n) << endl;
	}
	
	system("pause");
	return 0;
}