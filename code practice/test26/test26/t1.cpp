//变态跳台阶

//一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。
//求该青蛙跳上一个n级的台阶总共有多少种跳法。

//思路：找出规律为：跳台阶方法总数为2^(n-1)
#include<iostream>
using namespace std;

int jumpFloorII(int number) 
{
	return pow(2, number);//规律：count = 2^(n-1)
}

int main1()
{
	int n;

	while (cin >> n)
	{
		cout << jumpFloorII(n) << endl;
	}
	system("pause");
	return 0;
}