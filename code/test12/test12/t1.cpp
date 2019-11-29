//二进制的插入

//题目描述：有两个32位整数n和m，请编写算法将m的二进制数位插入到n的二进制的第j到第i位,
//其中二进制的位数从低位数到高位且以0开始。
//给定两个数int n和int m，同时给定int j和int i，意义如题所述，
//请返回操作后的数，保证n的第j到第i位均为零，且m的二进制位数小于等于i - j + 1。

//思路：要把m插入到n中的第j位到第i位，则把m向左移 j 位，再与n 按位或，即可得到新的二进制数
#include<iostream>
using namespace std;

int binInsert(int n, int m, int j, int i)
{
	m <<= j;
	return n | m;
}

int main()
{
	int n, m, i, j;
	cin >> n >> m >> i >> j;

	cout << binInsert(n, m, i, j) << endl;
	system("pause");
	return 0;
}