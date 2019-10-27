#include<iostream>
#include<algorithm>
using namespace std;

void fillSTForm(int src[], int n, int dst[][4])
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		dst[i][0] = src[i];
	}

	for (i = 1; (1 << i) <= n; i *= 2)
	{
		for (j = 0; j < n- (1 << i) + 1; j++)
		{

		}
	}
}

int main2()
{
	int a[10] = { 2, 5, 3, -1, 2, 8, 4, 9, -5,1 };
	int res[10][4];
	system("pause");
	return 0;
}