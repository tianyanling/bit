//MP3π‚±ÍŒª÷√
//https://www.nowcoder.com/questionTerminal/eaf5b886bd6645dd9cfb5406f3753e15
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void moveFlag(int n, string s)
{
	int flag = 1;
	for (int i = 0; i < s.size(); i++)
	{
		if (flag == 1 && s[i] == 'U')
		{
			flag = n;
		}
		else if (flag == n && s[i] == 'D')
		{
			flag = 1;
		}
		else
		{
			if (s[i] == 'U')
			{
				flag--;
			}
			else
			{
				flag++;
			}
		}
	}
	if (n <= 4)
	{
		for (int i = 1; i <= n; i++)
		{
			cout << i << " ";
		}
		cout << endl << flag << endl;
	}
	else
	{
		if (flag == n || s[s.size() - 1] == 'D')
		{
			for (int i = flag - 3; i <= flag; i++)
			{
				cout << i << " ";
			}
		}
		else
		{
			for (int i = flag; i < flag + 4; i++)
			{
				cout << i << " ";
			}
		}
		cout << endl << flag << endl;
	}
}

int main()
{
	int n;
	string s;

	while (cin >> n)
	{
		cin >> s;
		moveFlag(n, s);
	}

	system("pause");
	return 0;
}