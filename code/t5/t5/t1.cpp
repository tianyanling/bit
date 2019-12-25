//跳台阶
//一只青蛙一次可以跳上1级台阶，也可以跳上2级。
//求该青蛙跳上一个n级的台阶总共有多少种跳法（先后次序不同算不同的结果）。
#include<iostream>
using namespace std;

int jumpFloor(int number) 
{
	int sum = 0;
	int pre2 = 1;
	int pre1 = 2;
	if (number <= 2)
	{
		sum = number;
	}
	 
	for (int i = 3; i <= number; i++)
	{
		sum = pre2 + pre1;
		pre2 = pre1;
		pre1 = sum;
	}
	return sum;
}

int main()
{
	int number;

	while (cin >> number)
	{
		cout << jumpFloor(number) << endl;
	}
	system("pause");
	return 0; 
}