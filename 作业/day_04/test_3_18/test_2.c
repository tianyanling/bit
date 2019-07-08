//2.求出0～999之间的所有“水仙花数”并输出。
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, m, n, t;
	for (i =100; i < 1000; i++)					//水仙花数是指一个三位数其各位数字的立方和等于该本身
	{
		m = i / 100;						//百位数
		n = i/10%10;					//十位数
		t = i % 10;						//个位数	
		if (i == m*m*m + n*n*n + t*t*t)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}

/*
#include <stdio.h>
#include <math.h>

int main5()
{
	int i, j;
	int sum = 0, count = 0;
	int tmp[10] = { 0 };

	for (i = 0; i <= 100000000; i++)
	{ 
		for (j = i; j; j /= 10) 
		{
			tmp[count] = j % 10;
			count++;
		}

		for (j = 0; j < count; j++)
		{
			sum += pow(tmp[j], count);
		}

		if (i == sum)
		{
			printf("%d\n", i);
		}

		sum = count = 0;
	}


	system("pause");
	return 0;
	}*/