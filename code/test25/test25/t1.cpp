//星际密码

//思路：转化为求斐波那契数列
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int n, i, x;
	int fib[10001];
	fib[0] = 1;
	fib[1] = 1;
	for (i = 2; i<10001; i++)
	{
		fib[i] = (fib[i - 1] % 10000 + fib[i - 2] % 10000) % 10000;
	}
	while (cin >> n)
	{
		while (n--)
		{
			cin >> x;
			printf("%04d", fib[x]);
		}
		printf("\n");
	}
	return 0;
}