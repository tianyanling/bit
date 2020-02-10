#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;

	while (cin>>n)
	{
		int count = 0;
		for (int i = 2; i <=n; i++)
		{
			if(n%i == 0)
			{
				while (n%i == 0)
				{
					n /= i;
				}
				count++;
			}
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}