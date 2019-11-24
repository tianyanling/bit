//另类加法
//不用任何算术运算符实现两数之和
//思路：不考虑进位，通过二进制的异或可实现按位累加
//进位问题：两个数相与后再左移1位
//
#include<iostream>
using namespace std;

int addAB(int A, int B)
{
	int sum;
	int count;
	
	if (B == 0)//没有进位的情况
	{
		return A;
	}

	count = (A & B) << 1;//有进位
	sum = A ^ B;
	
	return addAB(sum,count);
}

int main1()
{
	int A, B;
	cin >> A >> B;

	cout << addAB(A, B) << endl;
	system("pause");
	return 0;
}