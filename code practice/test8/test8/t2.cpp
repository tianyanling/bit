//最小公倍数
//思路：正整数A，B的最小公倍数，一定能够同时整除这两个数，故余数同时为0，即为这两个数的最小公倍数
#include<iostream>
using namespace std;

int main()
{
	int A, B;
	int i = 0;
	cin >> A >> B;

	if (A < 0 || B < 0)
	{
		cout << "请输入正整数" << endl;
		cin >> A >> B;
	}

	if (A >= B)
	{
		for (i = A; i < A*B; i++)
		{
			if (i%A == 0 && i %B == 0)
			{
				break;
			}
		}
	}
	else
	{
		for (i = B; i < A*B; i++)
		{
			if (i%A == 0 && i %B == 0)
			{
				break;
			}
		}
	}

	int ret = i;

	cout << ret << endl;
	system("pause");
	return 0;
}