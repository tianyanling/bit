#include <iostream>
using namespace std;

//选择排序是不稳定的，时间复杂度是O(n^2)
void SelectSort(int * arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		int min_index = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[j] < arr[min_index])
			{
				min_index = j;
			}
		}
		if (i != min_index)
		{
			int tmp = arr[i];
			arr[i] = arr[min_index];
			arr[min_index] = tmp;
		}
	}
}

void Print3(int *arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main3()
{
	int arr[] = { 34,2,5,7,4,1,2,9,0,6 };
	int len = sizeof(arr) / sizeof(arr[0]);
	SelectSort(arr, len);
	Print3(arr, len);
	system("pause");
	return 0;
}