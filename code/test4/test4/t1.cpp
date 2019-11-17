//计算糖果问题
#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	int A, B, C;
	cin >> a >> b >> c >> d;
	if (a + b + d != c)
	{
		cout << "No" << endl;
	}
	else
	{
		B = (b + d) / 2;
		if (B != (b + d)/2)
		{
			cout << "No" << endl;
		}
		else
		{
			A = B + a;
			C = B - b;
			cout << A << " " << B << " " << C << endl;
		}
	}
	system("pause");
	return 0;
}