#include <iostream>
#include <string>
using namespace std;

int NumberOf1Between1AndN_Solution(int n)
{
	int count = 0;
	int i = 1;

	while (i <= n)
	{
		int tmp = i;
		while (tmp != 0)
		{
			if (tmp % 10 == 1)
			{
				count++;
			}
			tmp /= 10;
		}
		i++;
	}

	return count;
}

int main1()
{
	int n = 126;
	cout << NumberOf1Between1AndN_Solution(n) << endl;
	system("pause");
	return 0;
}