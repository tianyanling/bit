//计算字符串的距离
//https://www.nowcoder.com/questionTerminal/3959837097c7413a961a135d7104c314?orderByHotValue=0&done=0&pos=18&onlyReference=false
#include<iostream>
#include<string>
#include <vector>
#include<algorithm>
using namespace std;

int calStringDistance(string s1, string s2) 
{
	int n = (int)s1.size();
	int m = (int)s2.size();
	vector<vector<int>>tmp(n + 1, vector<int>(m + 1, 0));

	tmp[0][0] = 0;//tmp[x][y]代表将s1字符串前x个字符修改成b字符串前y个字符
	for (int i = 1; i <= m; ++i)
	{
		tmp[0][i] = i;
	}
	for (int i = 1; i <= n; ++i)
	{
		tmp[i][0] = i;
	}
	for (int i = 1; i <= n; ++i) 
	{
		for (int j = 1; j <= m; ++j) 
		{
			int one = tmp[i - 1][j] + 1;
			int two = tmp[i][j - 1] + 1;
			int three = tmp[i - 1][j - 1];
			if (s1[i - 1] != s2[j - 1])
			{
				three += 1;
			}
			tmp[i][j] = min(min(one, two), three);
		}
	}
	return tmp[n][m];
}

int main()
{
	string s1;
	string s2;

	while (cin >> s1 >> s2)
	{
		cout<<calStringDistance(s1, s2);
	}
	system("pause");
	return 0;
}