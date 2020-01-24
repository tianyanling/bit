//º”“ª
//https://leetcode-cn.com/problems/plus-one/comments/
#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int>& digits)
{
	for (int i = digits.size() - 1; i >= 0; i--)
	{
		if (digits[i] != 9) 
		{
			digits[i]++;
			return digits;
		}
		digits[i] = 0;
	}

	vector<int> tmp(digits.size() + 1);
	tmp[0] = 1;
	return tmp;
	return digits;
}

int main()
{
	vector<int> digits = { 3,2,1,3 };
	vector<int> res = plusOne(digits);

	for (auto &e : res)
	{
		cout << e << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}