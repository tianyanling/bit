#include<iostream>
#include<string>
using namespace std;

#if 0
int main1()
{
	string s;
	int i;

	while (cin >> s)
	{

		int tmp[52] = { 0 };

		for (i = 0; i<s.size(); i++) 
		{
			tmp[s[i]] = 1;
		}

		for (i = 0; i<s.size(); i++)
		{
			if (tmp[s[i]] == 1) 
			{
				cout << s[i];
				tmp[s[i]] = 0;
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
#endif

int main()
{
	char tmp[101] = { 0 };
	cin >> tmp;
	string src(tmp);
	string dst;

	for (auto &ch : src)
	{
		if (dst.find(ch) != -1)
		{
			dst.push_back(ch);	
		}
	}
	cout << dst;
	system("pause");
	return 0;
}