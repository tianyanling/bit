#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		if (n != 0)
		{
			cout << pow(5, n) - 4 << " " << pow(4, n) + n - 4 << endl;
		}
		else
		{
			break;
		}
	}
	system("pause");
	return 0;
}