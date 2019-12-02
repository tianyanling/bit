//计算二进制中1的个数
#include<iostream>
using namespace std;

static int findNumberOf1(int num)
{
	int count = 0;

	while (num)
	{
		num = num & (num - 1);
		count++;
	}

	return count;
}

int main1()
{
	int n;
	while (cin >> n)
	{
		cout << findNumberOf1(n) << endl;
	}
	system("pause");
	return 0;
}