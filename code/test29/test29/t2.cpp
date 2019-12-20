//ÓÐ¼Ù±Ò
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;

	while (cin >> n && n != 0)
	{
		int count = 1;

		if (n == 1)
		{
			count = 0;
		}
		else if (n == 2 || n == 3)
		{
			count = 1;
		}
		while (n>3)
		{
			if (n % 3 == 0)
			{
				n /= 3;
			}
			else
			{
				n = n / 3 + 1;
			}
			count++;
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}
