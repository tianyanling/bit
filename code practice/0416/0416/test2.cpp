#include <iostream>
#include <vector>
using namespace std;

int main2()
{
	int a, b, m, x;
	while (cin >> a >> b >> m >> x)
	{
		vector<int> tmp;
		while (1)
		{
			x = (a*x + b) % m;
			tmp.push_back(x);
			if (tmp.size() == 50)
				break;
		}
		int count = 0;
		for (int i = 0; i < tmp.size(); i++)
		{
			for (int j = i+1; j < tmp.size(); j++)
			{
				if (tmp[i] == tmp[j])
				{
					count = 0;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}