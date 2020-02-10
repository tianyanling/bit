//数值的整数次方 
//https://www.nowcoder.com/practice/1a834e5e3e1a4b7ba251417554e07c00?tpId=13&tqId=11165&tPage=1&rp=1&ru=%2Fta%2Fcoding-interviews&qru=%2Fta%2Fcoding-interviews%2Fquestion-ranking
#include<iostream>
#include<algorithm>
using namespace std;

//pow只能用于double类型
double Power(double base, int exponent) 
{
	return pow(base, (double)exponent);
}

int main()
{
	double base;
	int exponent;

	while (cin >> base >> exponent)
	{
		cout << Power(base, exponent) << endl;
	}
	system("pause");
	return 0;
}