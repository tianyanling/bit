#include<iostream>
#include<vector>
using namespace std;

int count(int n)
{
	int count = 0;
	vector<int> v;

	for (int i = 2; i < n; i++)
	{
		int sum = 0;
		for (int j = 1; j < i/2+1; j++)
		{
			if (i%j == 0)
			{
				sum += j;
			}
		}

		if (sum == i)
		{
			count++;
		}	
	}
	return count;
}

int main1()
{
	int n;
	while (cin >> n)
	{
		cout << count(n) << endl;
	}
	system("pause");
	return 0;
}