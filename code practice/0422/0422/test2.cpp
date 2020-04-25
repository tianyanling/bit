#include <iostream>
using namespace std;
//冒泡排序是稳定的，时间复杂度为O(n^2)，空间复杂度是O(1)
void BubbleSort(int *arr, int len)
{
	int tmp;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

void Print2(int *arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	} 
	cout << endl;
}
int main2()
{
	int arr[] = { 34,2,5,7,4,1,2,9,0,6 };
	int len = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr,len);
	Print2(arr, len);
	system("pause");
	return 0;
}