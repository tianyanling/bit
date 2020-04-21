#include  <iostream>
#include <vector>
using namespace std;

int findMaxGap(vector<int> A, int n)
{
	// write code here
	int max_num = 0;
	int max1 = 0;
	for (int i = 0; i < A.size() - 1; i++)
	{
		int max2 = 0;
		if (A[i] > max1)
		{
			max1 = A[i];
		}
		for (int j = i+1; j < A.size(); j++)
		{
			if (A[j] > max2)
			{
				max2 = A[j];
			}
		}

		if (max_num < abs(max1 - max2))
		{
			max_num = abs(max1 - max2);
		}
	}
	return max_num;
}

int main1()
{
	vector<int> A = { 28,75,38,44,66,1 };
	cout << findMaxGap(A, 6) << endl;
	system("pause");
	return 0;
}