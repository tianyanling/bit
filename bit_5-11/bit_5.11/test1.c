#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//求两个数中的较大值
#if 0
int main()
{
	int a = 5, b = 7;
	int max = (a + b + abs(a - b)) / 2;
	printf("%d\n", max);
	system("pause");
	return 0;
}
#endif

#if 0
//sizeof是运算符
//strlen是函数
void main()
{
	char a[] = "abc\012abc";			//\0后面加数字表示八进制的数，012表示10
	char b[] = "abc\0abc";
	int n = sizeof(a);
	int m = sizeof(b);
	printf("n=%d,m=%d\n", n, m);
	n = strlen(a);							//strlen不将\0计算在内，遇到\0就停止
	m = strlen(b);
	printf("n=%d,m=%d\n", n, m);
	system("pause");
}
//输出结果n=8,m=8
//n=7,m=3
#endif
#if 0
void main()
{
	unsigned int a = -2;
	printf("a=%d,a=%u\n", a, a);		//输出结果a=-2, a=4294967294
	system("pause");
}
//整数在计算机中以原码存储，负数在计算机中以补码存储
#endif

#if 0
void main()
{
	int a = 10;
	unsigned int b = 5;
	if (a + b > 0)
		printf(">0\n");
	else
		printf("<0\n");
	system("pause");
}
#endif

#if 0
void main()
{
	char a = 258;//1 00000010    从低位截取，结果为2
	printf("%d\n",a);		//输出结果为2
	system("pause");
}
#endif

void main()
//进制转换
{
	int a, b, r;
	int i = 0;
	char str[20] = "";
	printf("请输入两个整数(第一个数为常数，第二个数为转换进制数)：");
	scanf("%d%d", &a, &b);
	while (a != 0)
	{
		r = a%b;
		if (r < 10)
		{
			str[i] = r + '0';
		}
		else
		{
			str[i] = r - 10 + 'A';
		}
		a = a / b;
		++i;
	}
	for (--i; i >= 0; --i)
	{
		printf("%c ", str[i]);
	}
	printf("\n");
	system("pause");
}