#include<iostream>
using namespace std;

int count(unsigned int c)
{
	int count = 0;

	while (c != 0)
	{
		if (c % 2 == 1)
		{
			count++;
		}
		c /= 2;
	}
	return count;
}

int main()
{
	unsigned int c = 8;

	cout << count(c) << endl;
	system("pause");
	return 0;
}