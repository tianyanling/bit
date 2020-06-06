#include <iostream>
#include <vector>
using namespace std;

int Find(vector<int> arr,int target)
{
	int begin = 0;
	int end = arr.size() - 1;
	while (begin <= end)
	{
		int mid = begin + (end - begin) / 2;

		if (arr[mid] > target)
		{
			begin = mid + 1;
		}
		else if (arr[mid] < target)
		{
			end = mid - 1;
		}
		else
		{
			return arr[mid];
		}
	}
	return -1;
}

int main1()
{
	vector<int> arr = { 1,2,3,4,5,6 };
	cout << Find(arr, 3) << endl;
	system("pause");
	return 0;
}