#include<iostream>
using namespace std;

int getTotalCount(int n)
{
	int arr[1000] = { 0 };
	int sum = 0;
	if (n == 0)
	{
		return -1;
	}
	else if (n == 1 || n == 2)
	{
		sum = 1;
	}
	else if (n == 3)
	{
		sum = 2;
	}

	for (int i = 4; i < 1000; i++)
	{
		arr[1] = arr[2] = 1;
		arr[3] = 2;
		arr[i] = arr[i - 1] + arr[i - 2];
		if (n == i)
		{
			sum = arr[i];
			break;
		}
	}
	return sum;
}

int main1()
{
	int monthcount;
	while (cin >> monthcount)
	{
		cout << getTotalCount(monthcount) << endl;
	}
	system("pasue");
	return 0;
}