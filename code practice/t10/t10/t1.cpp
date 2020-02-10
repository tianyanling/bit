#include<iostream>
#include<vector>
using namespace std;

int minNumberInRotateArray(vector<int> rotateArray)
{
	int left = 0;
	int high = rotateArray.size() - 1;
	int mid = 0;

	while (left < high) 
	{		
		if (rotateArray[left] < rotateArray[high])
		{
			return rotateArray[left];
		}
			
		mid = left + (high - left) / 2;
		if (rotateArray[mid] > rotateArray[left])
		{
			left = mid + 1;
		}
		else if (rotateArray[mid] < rotateArray[high])
		{
			high = mid;
		}
		else
		{
			left++;
		}
	}
	return rotateArray[left];
}

int main()
{
	vector<int> v = { 3,4,5,1,2 };
	cout << minNumberInRotateArray(v) << endl;
	system("pause");
	return 0;
}