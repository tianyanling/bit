// write your code here cpp
#include <iostream>
using namespace std;

int main1()
{
	int n;
	while (cin >> n)
	{
		int f[21];
		f[1] = 0;
		f[2] = 1;
		for (int i = 3; i < 21; i++)
		{
			f[i] = (i - 1)*(f[i - 1] + f[i - 2]);
		}
		cout << f[n] << endl;
	}
	system("pause");
	return 0;
}