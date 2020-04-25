#include <iostream>
using namespace std;
//�����ǲ��ȶ��ģ�ʱ�临�Ӷ�ΪO(nlogn)���ռ临�Ӷ�ΪO(logn)
//���ó���Ϊ������Ԫ��Խ�࣬Ԫ��Խ���򣬿��ŵ�Ч��Խ��
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