//2.编写一个函数实现n^k，使用递归实现 

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int pow(int n, int k)											//n代表底数，k代表次幂
{
	if (k == 1)
	{
		return n;
	}
	return n*pow(n, k - 1);
}

int main()
{
	int n, k;
	printf("请输入底数和次幂：\n");
	scanf("%d%d", &n, &k);
	printf("n^k = %d\n", pow(n, k));
	system("pause");
	return 0;
}