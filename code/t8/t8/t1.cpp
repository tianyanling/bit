//调整数组顺序使奇数位于偶数前面
//输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有的奇数位于数组的前半部分，
//所有的偶数位于数组的后半部分，并保证奇数和奇数，偶数和偶数之间的相对位置不变。
#include<iostream>
#include<vector>
using namespace std;

void reOrderArray(vector<int> &array)
{
	vector<int> ret;
	for (int i = 0; i < array.size(); i++)
	{
		if (array[i] % 2 != 0)
		{
			ret.push_back(array[i]);
		}
	}

	for (int i = 0; i < array.size(); i++)
	{
		if (array[i] % 2 == 0)
		{
			ret.push_back(array[i]);
		}
	}

	for (auto & e : ret)
	{
		cout << e << " ";
	}
	cout << endl;
}

int main()
{
	vector<int> array = { 1,2,3,4,5,6,7,3,4,5,3,5,6,24,4 };

	reOrderArray(array);
	system("pause");
	return 0;
}