#include<iostream>
#include<vector>
using namespace std;

int maxys(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return maxys(b, a%b);
	}
}
int main1()
{
	int n, a;
	int res = 0;
	int c = 0;
	
	while (cin >> n>>a)
	{
		c = a;
		vector<int> v(n);
		for (auto &i : v)
		{
			cin >> i;
		}

		for (int j = 0; j < n; j++)
		{
			if(c >= v[j])
			{
				c += v[j];
			}
			else
			{
				if (v[j] % c == 0)
				{
					res = c;
				}
				else
				{
					res = maxys(v[j], c);
				}
				c += res;
			}
		}
		cout << c << endl;
	}
	
	system("pause");
	return 0;
}