//假如我国国民生产总值的年增长率为9%，计算10年后我国国民生产总值与现在相比增长多少百分比。
//计算公式为p=(1+r)^n,  r为年增长率，n为年数，p为与现在相比的倍数。

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	double p,n,r;
	n = 10;
	r = 0.09;
	p =pow(1+r,n);		//pow(x,y)  x为底数，y为次幂，x,y均为double类型
	printf("p=%f\n", p);
	system("pause");
	return 0;
}