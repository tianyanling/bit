//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
int main3()
{
	int i, m;
	int Sn = 0, temp = 0;

	scanf("%d", &m);
		for (i = 1; i <= 5; i++)
		{
			temp = temp * 10 + m;
			Sn += temp;
		}
	printf("Sn=%d\n", Sn);
	
	system("pause");
	return 0;
}