//ÆûË®Æ¿ÎÊÌâ
#include<iostream>
using namespace std;

int bottles(int n)
{
	int sum = 0;
	int bottles = 0;

	while (n >= 3)
	{
		sum += n / 3;
		bottles = n / 3 + n % 3;
		n = bottles;
	}
	if (n == 2)
	{
		sum++;
	}
	return sum;
}

int main1()
{
	int n;

	while(cin>>n)
	{
		if (n == 0)
		{
			break;
		}
		
		cout << bottles(n) << endl;
	}

	system("pause");
	return 0;
}