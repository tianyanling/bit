//数组中重复的数字
#include<iostream>
using namespace std;

bool duplicate(int numbers[], int length, int* duplication)
{
	if (numbers == nullptr || length < 0)
	{
		return false;
	}

	for (int i = 0; i < length; i++)
	{
		if (numbers[i] < 0 || numbers[i] > length - 1)
		{
			return false;
		}
	}

	for (int i = 0; i < length; i++)
	{
		while (numbers[i] != i)
		{
			if (numbers[i] == numbers[numbers[i]])
			{
				*duplication = numbers[i];
				return true;
			}

			int tmp = numbers[i];
			numbers[i] = numbers[numbers[i]];
			numbers[numbers[i]] = tmp;
		}
	}
	return false;
}
int main1()
{
	int numbers[] = { 2,3,1,0,2,5,3 };
	int duplication[] = { 0 };

	int length = sizeof(numbers) / sizeof(numbers[0]);
	cout << duplicate(numbers, length, duplication) << endl;
	system("pause");
	return 0;
}