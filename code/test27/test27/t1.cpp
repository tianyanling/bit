//不用加减乘除做加法
#include<iostream>
using namespace std;

#if 0
int Add(int num1, int num2)
{
	while (num2 != 0)
	{
		int sum = num1 ^ num2;
		num2 = (num1 & num2) << 1;
		num1 = sum;
	}
	return num1;
}
#elif 1
int Add(int num1, int num2)
{
	if (num1 > 0)
	{
		while (num1--)
		{
			num2++;
		}
	}
	else
	{
		while (num1++)
		{
			num2--;
		}
	}
}
#endif
int main()
{
	int num1, num2;
	
	while (cin >> num1>> num2)
	{
		cout << Add(num1,num2) << endl;
	}
	system("pause");
	return 0;
}