//调整数组顺序使奇数位于偶数前面
//输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有的奇数位于数组的前半部分，
//所有的偶数位于数组的后半部分，并保证奇数和奇数，偶数和偶数之间的相对位置不变。
#include<iostream>
#include<vector>
using namespace std;

void reOrderArray(vector<int> &array)
{
	int num = array.size();
	for (int i = 0; i<num; i++)//找到第一个偶数位置
	{
		int temp;
		if ((array[i] % 2) == 0)//偶数
		{
			for (int j = i; j < num; j++)
			{
				if ((array[j] % 2) == 1)//找到偶数后第一个奇数位置，从第一个偶数位开始后移
				{
					temp = array[j];
					while (j > i)
					{
						array[j] = array[j - 1];//将第一个偶数位开始后移
						j--;
					}
					array[j] = temp;//将该奇数前移到第一个偶数位
					i++;//第一个偶数位置后移一次
				}
			}
			break;
		}
	}
}

int main()
{
	vector<int> array = { 1,2,3,4,5,6,7,3,4,5,3,5,6,24,4 };

	reOrderArray(array);
	system("pause");
	return 0;
}