//斐波那契数列
//输入一个数，计算经过多少步可以将这个数变换为斐波那契数，每次变换只能通过X+1或X-1
#include<iostream>
#include<algorithm>
using namespace std;

int main1()
{
	int N;
	cin >> N;

	int tmp;
	int a = 0, b = 1;
	while (N > b)
	{
		tmp = a;
		a = b;//a相当于Fib[i],b相当于Fib[i+1]
		b += tmp;
	}

	cout << min((N - a), (b - N));
	cout << endl;
	system("pause");
	return 0;
}