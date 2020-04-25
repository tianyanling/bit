#include <iostream>
using namespace std;
//快排是不稳定的，时间复杂度为O(nlogn)，空间复杂度为O(logn)
//适用场景为数组中元素越多，元素越无序，快排的效率越高
//
void QuickSort(int* arr, int start, int end)
{
	if (start < end)
	{
		int a = start;
		int b = end;
		int tmp = arr[a];
		while (a < b)
		{
			while (a < b && arr[b] >= tmp)
			{
				b--;
			}
			if (a < b)
			{
				arr[a] = arr[b];
				a++;
			}

			while (a < b && arr[a] <= tmp)
			{
				a++;
			}
			if (a < b)
			{
				arr[b] = arr[a];
				b--;
			}
		}
		arr[a] = tmp;
		QuickSort(arr, start, a - 1);
		QuickSort(arr, a + 1, end);
	}
}

void Print1(int* arr,int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main1()
{
	int arr[] = { 1,2,3,76,4,9,2,3,4,6,7 };
	int len = sizeof(arr) / sizeof(arr[0]);
	QuickSort(arr, 0, len - 1);
	Print1(arr,len);
	system("pause");
	return 0;
}