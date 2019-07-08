//3.编程实现：一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。请找出这个数字。（使用位运算）

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[] = { 2, 8, 4, 2, 7, 9, 4, 7, 8 };
	int i;
	int res = 0;
	for (i = 0; i < sizeof(a)/sizeof(a[0]); i++)
	{
		res ^= a[i];
	}
	printf("%d\n",res);
	system("pause");
	return 0;
}