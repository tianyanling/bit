#include <iostream>
using namespace std;

int main()
{
	int arr[100001];
	arr[0] = 1;
	arr[1] = 1;
	for (int i = 2; i <= 100000; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
		arr[i] = arr[i] % 1000000;
	}
	int n;
	while (cin>>n) 
	{
		//前面补0,要用06d
		printf((n < 29 ? "%d\n" : "%06d\n"), arr[n]);
	}
	return 0;
}