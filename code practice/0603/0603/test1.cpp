#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	string tmp, res;
	for (int i = 0; i <= str.size(); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			tmp += str[i];
		}
		else
		{
			if (res.size() < tmp.size())
			{
				res = tmp;
			}
			else
			{
				tmp.clear();
			}
		}
	}
	cout << res << endl;
	system("pause");
	return 0;
}