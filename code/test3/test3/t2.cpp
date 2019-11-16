//数组中出现超过一半的数字
//例：{1,2,3,2,2,2,5,2,1}   输出结果为：2
//如果数组中的数字没有超过数组一半的数字则返回0
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int MoreThanHalfNum_Solution(vector<int> numbers)
{
	if (numbers.empty())
	{
		return 0;
	}

	// 遍历每个元素，并记录次数；若与前一个元素相同，则次数加1，否则次数减1
	int result = numbers[0];
	int times = 1; // 次数

	for (int i = 1; i<numbers.size(); i++)
	{
		if (times == 0)
		{
			// 更新result的值为当前元素，并置次数为1
			result = numbers[i];
			times = 1;
		}
		else if (numbers[i] == result)
		{
			times++; // 相同则加1
		}
		else
		{
			times--; // 不同则减1               
		}
	}

	// 判断result是否符合条件，即出现次数大于数组长度的一半
	times = 0;
	for (int i = 0; i<numbers.size(); ++i)
	{
		if (numbers[i] == result)
		{
			times++;
		}
	}

	return (times > numbers.size() / 2) ? result : 0;
}

int main()
{
	vector<int> v = { 1,2,3,2,2,2,5,2,1};

	cout<<MoreThanHalfNum_Solution(v);
	system("pause");
	return 0;
}