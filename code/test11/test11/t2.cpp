//题目：最大连续bit数
//功能: 求一个byte数字对应的二进制数字中1的最大连续数，例如3的二进制为00000011，最大连续2个1

//思路：求a与a移位后按位与的结果，如果连续的1的个数为1，与运算后结果为0；
//如果有多个连续的1，则按位与之后其他位都为0，而连续1的个数减1；
//依次循环，直到a为0，i记录了移位多少次，即为连续1的个数
#include<iostream>
using namespace std;

int main()
{
	int a;

	while (cin >> a)
	{
		int i = 0;
		for (i = 0; a != 0; i++)
		{
			a = a & (a << 1);//进制转换首选位运算
		}
		cout << i << endl;
	}
	system("pause");
	return 0;
}