//判断回文数
#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(int x)
{
	int sum = 0;
	if (x < 0 || (x / 10 != 0 && x % 10 == 0))
	{
		return false;
	}
	else 
	{
		while (x > sum)
		{
			sum = sum * 10 + x % 10;
			x = x / 10;
		}
	}
	//若整数位数为偶数
	if (sum == x)
	{
		return true;
	}
	//若整数位数为奇数
	if (sum / 10 == x)
	{
		return true;
	}
	return false;
}

int main()
{
	int x = 122222111;
	cout << isPalindrome(x) << endl;
	system("pause");
	return 0;
}