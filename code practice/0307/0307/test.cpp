//一个整型数组里除了两个数字之外，其他的数字都出现了两次。请写程序找出这两个只出现一次的数字。
#include<iostream>
#include<vector>
using namespace std;

void FindNumsAppearOnce(vector<int> data, int* num1, int *num2)
{
	if (data.empty() || data.size() <= 1) 
	{
		num1[0] = num2[0] = 0;
		return;
	}

	int len = data.size(), index = 0, sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum ^= data[i];
	}

	for (index = 0; index < 32; index++)
	{
		if ((sum & (1 << index)) != 0) 
			break;
	}
	for (int i = 0; i < len; i++)
	{
		if ((data[i] & (1 << index)) != 0) 
		{
			num2[0] ^= data[i];
		}
		else 
		{
			num1[0] ^= data[i];
		}
	}
}

int main()
{

	system("pause");
	return 0;
}