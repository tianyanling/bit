#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

#define N 10
#define S(a,b) a+b
#define M(a,b) a*b
#define T(a,b) ((a)*(b))//括号加到不能加为止

int main()
{
	int n = N;
	int s = S(4, 5);//4+5=9
	int m = M(4 + 4, 5 + 5);//4+4*5+5=29
	//不能自己加括号，照抄下来
	int z = M(4 + 4, 5 + 5) / M(4 + 4, 5 + 5);//4+4*5+5/4+4*5+5=50
	int t = T(4 + 4, 5 + 5) / T(4 + 4, 5 + 5);
	printf("%d,%d,%d,%d\n", s,m,z,t);
	system("pause");
	return 0;
}
