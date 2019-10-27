#include<iostream>
using namespace std;

int Min(int *arr, int n)
{
	int i, j;
	int tmp = 0;

	int m;
	cout << "请输入区间个数m" << endl;
	cin >> m;
	if (m > n)
	{
		cout << "区间错误，请重新输入！";
	}

	for (i =1; i < n; i++)
	{
		if (i < m)
		{
			j = 1;
		}

		for (j = i - m; j < i; j++)
		{
			if (arr[j] < arr[j - 1])
			{
				tmp = arr[j];
			}
			else
			{
				tmp = arr[j - 1];
			}
		}
	}
	return tmp;
}

int main()
{
	int arr[] = { 7, 8, 1, 4, 3, 2 };
	int n = (sizeof arr) / (sizeof arr[0]);

	cout<<Min(arr, n)<<endl;
	system("pause");
	return 0;
}