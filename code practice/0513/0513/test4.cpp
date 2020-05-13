#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int trap(vector<int>& height)
{
	if (height.size() < 3)
	{
		return 0;
	}
	int sum = 0;
	vector<int> max_left(height.size());
	vector<int> max_right(height.size());
	max_left[0] = height[0];
	for (int i = 1; i < height.size(); i++)
	{
		max_left[i] = max(height[i], max_left[i - 1]);
	}

	max_right[height.size() - 1] = height[height.size() - 1];
	for (int j = height.size() - 2; j >= 0; j--)
	{
		max_right[j] = max(height[j], max_right[j + 1]);
	}

	for (int k = 1; k < height.size()-1; k++)
	{
		sum += (min(max_left[k], max_right[k]) - height[k]);
	}
	return sum;
}

int main()
{
	vector<int> height{ 0,1,0,2,1,0,1,3,2,1,2,1 };
	cout << trap(height) << endl;
	system("pause");
	return 0;
}