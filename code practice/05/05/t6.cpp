//数组中超过出现次数超过数组长度一半的数字
//https://www.nowcoder.com/practice/e8a1b01a2df14cb2b228b30ee6a92163?tpId=13&&tqId=11181&rp=1&ru=/activity/oj&qru=/ta/coding-interviews/question-ranking
//数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。
//例如输入一个长度为9的数组{1,2,3,2,2,2,5,4,2}。
//由于数字2在数组中出现了5次，超过数组长度的一半，因此输出2。如果不存在则输出0。
#include<iostream>
#include<vector>
using namespace std;

//思路：以第一个数字为计数的标志数，向后遍历，若下一个数字与这个数字相等，则计数器加1，
//当连续相等的数字遇到不同的数字时，标志数更新为当前数字，计数器 减1，直到计数器减为1
//若没有连续的数字，标志数更新为当前数字，计数器始终置位为1,最后变化的数字即为出现次数最多的数字
//将该数字与数组长度的一半进行比较，判断该数字是否超过数组长度的一半
int MoreThanHalfNum_Solution(const vector<int>& v) 
{
	int icount = 1;
	int num = v[0];

	for (int i = 1; i < v.size(); i++)
	{
		if (v[i] == v[i - 1])
		{
			icount++;
		}
		else
		{
			if (icount <= 1)
			{
				num = v[i];
			}
			else
			{
				icount--;
			}
		}
	}

	if (v.size()/2 < count(v.begin(), v.end(), num))//count()函数是STL提供的一个函数，第一个参数是起始范围，
	//第二个参数是结束范围，第三个参数是查找的元素，返回该元素出现的次数
	{
		return num;
	}
	return 0;
}

int main6()
{
	vector<int> v;
	int nums[9] = { 1,2,3,2,2,2,5,4,2 };
	v.insert(v.begin(), nums, nums + 9);

	cout << MoreThanHalfNum_Solution(v) << endl;
	system("pause");
	return 0;
}