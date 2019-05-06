//从键盘输入一个人小于1000的正数，要求输出它的平方根（若不是整数，则给出整数部分），
//要求在输入数据后先对其进行检查是否为小于1000的正数。若不是则要求重新输入。

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float n;
	int x;
	printf("请输入一个小于1000的正数：\n");
	scanf("%f",&n);
	if (n < 0 || n>1000)
	{ 
		printf("请重新输入！\n");
	}
	x =  sqrt(n);
	printf("%d\n",x);
	system("pause");
	return 0;
}