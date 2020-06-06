#include <iostream>
#include <vector>
using namespace std;

int PathSum(vector<vector<int>> arr)
{
	int row = arr.size();
	int col = arr[0].size();
	int sum = arr[0][0];
	
	int i = 0, j = 0;
	while (i < row || j < col)
	{
		if (arr[i + 1][j] < arr[i][j + 1])
		{
			sum += arr[i + 1][j];
			i++;
		}
		else
		{
			sum += arr[i][j + 1];
			j++;
		}
	}
	return sum;
}

int main2()
{
	vector<vector<int>> arr{ {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
	cout << PathSum(arr) << endl;
	system("pause");
	return 0;
}