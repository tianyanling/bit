#include<iostream>
#include<string>
using namespace std;

string addBinary(string a, string b) 
{
	string tmp;
	for (int i = b.size()-1; i >=0; i--)
	{
		for (int j = i; j >=0; j--)
		{
			if (a[i] + b[j] == '1')
			{
				tmp.push_back('1');
			}
			else if(a[i] + b[j] == '0')
			{
				tmp.push_back('0');
			}
			else
			{
				tmp.push_back('0');
				if (i > 0)
				{
					a[i - 1] = '1';
				}
			}
		}
	}
	reverse(tmp.begin(), tmp.end());
	return tmp;
}

int main()
{
	string a = "101";
	string b = "110";

	cout << addBinary(a, b) << endl;
	system("pause");
	return 0;
}