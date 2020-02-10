//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	//int money = 20;
//	int money = 0;
//	printf("请输入总钱数：");
//	scanf("%d",&money);
//	//int total=20;
//	//int empty = 20;
//	int total = money;			//喝汽水的瓶数
//	int empty = money;		//空瓶子数
//	while (empty >=2)
//	{
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n",total);
//	system("pause");
//	return 0;
//}


int main()
{
	int m, n;
	printf("请输入汽水瓶水和兑换汽水所需要的空瓶：");
	scanf("%d%d", &m,&n);
	int total = m;		//喝汽水的瓶数
	int empty = m;		//空瓶子数
	while (empty >=n)
	{
		total = total + empty / n;		
		empty = empty / n + empty % n;
	}
	printf("%d\n", total);
	system("pause");
	return 0;
}