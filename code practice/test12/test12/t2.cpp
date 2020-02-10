//查找组成一个偶数最接近的两个素数
//题目描述：任意一个偶数（大于2）都可以由2个素数组成，
//组成偶数的2个素数有很多种情况，本题目要求输出组成指定偶数的两个素数差值最小的素数对

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int primeNum(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
		{
			return false;
		}
	}
	return true;
}

int main2()
{
	int a = 0, b = 0;
	int num;

	vector<int> v;

	while (cin >> num)
	{
		if (num % 2 != 0)//确定输入的数字为偶数
		{
			return false;
		}

		if (num < 2)
		{
			return 1;
		}
		else
		{
			//从两边向中间找
			for (int i = 0; i <= num / 2; i++)
			{
				if (primeNum(i) && primeNum(num - i))//判断两个数都为素数，且一直像差值较小的方向靠近，覆盖上一对数值
				{
					a = i;
					b = num - i;
				}
			}
		}
		cout << a << endl;
		cout << b << endl;
	}

	system("pause");
	return 0;
}