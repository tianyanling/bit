#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	double m, n, k;
	vector<double> v;//doubleµÄ·¶Î§ÊÇ10 ^(-308)µ½10^308

	while (cin>>m>>n>>k)
	{
		v.push_back(m);
		v.push_back(n);
		v.push_back(k);
		sort(v.begin(), v.end());
		if ((v[0] + v[1]) > v[2] && (v[2] - v[1]) < v[0])
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
		v.clear();
	}
	system("pause");
	return 0;
}