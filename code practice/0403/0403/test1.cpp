#include <iostream>
using namespace std;

int main1()
{
	int n;
	long long arr[21];
	arr[1] = 0;
	arr[2] = 1;
	for (int i = 3; i < 22; i++)
	{
		arr[i] = (i - 1)*(arr[i - 1] + arr[i - 2]);
	}
	while (cin >> n)
	{
		float rate = 0;
		long long sum = 1;

		for (int i = 1; i <= n; i++)
		{
			sum *= i;
		}
		rate = ((1.0*arr[n]) / sum) * 100;
		printf("%.2f%\n", rate);
	}
	system("pause");
	return 0;
}