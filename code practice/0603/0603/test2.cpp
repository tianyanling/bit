#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int MoreThanHalfNum_Solution(vector<int> numbers)
{
	sort(numbers.begin(), numbers.end());

	int ret = numbers[numbers.size() / 2];
	int count = 0;
	for (int i = 0; i < numbers.size(); i++)
	{
		if (ret == numbers[i])
		{
			count++;
		}
	}
	if (count > numbers.size() / 2)
	{
		return ret;
	}
	else
	{
		return 0;
	}
}

int main()
{
	vector<int> numbers = { 1,2,2,22,3,2,2,4,5 };
	cout << MoreThanHalfNum_Solution(numbers) << endl;
	system("pause");
	return 0;
}