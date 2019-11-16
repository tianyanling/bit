//字符串中找出连续的最长的数字串
//例：abcd12345ed125ss123456789   输出结果为：123456789
#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
using namespace std;

int main1()
{
	string s;
	string count;
	string str;

	getline(cin, s);
	int maxcount = 0;

	int i;
	for (i = 0; i < s.size(); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')//筛选数字
		{
			count.push_back(s[i]);
	
			while (s[i + 1] >= '0' && s[i + 1] <= '9')//判断数字串部分，并将这些数字串push要另一个字符串中
			{
				i++;
				count.push_back(s[i]);
			}

			if (count.size() > maxcount)//判断两段数字串的长短，保存较长的数字串
			{
				maxcount = count.size();
				str = count;
			}
		}
		count.clear();

		if (maxcount < count.size())
		{
			maxcount = count.size();
			str = count;
		}
	}
	cout << str<<endl;
	system("pause");
	return 0;
}